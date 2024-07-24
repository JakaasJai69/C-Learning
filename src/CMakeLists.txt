#Set up compile files
set(SOURCE_FILES
    main.cpp
    main_functions.cpp
    # ... add all your .cpp files here
)

#target
set (target_name
    C-Learning
)

add_subdirectory(libs)

#target
add_executable(${target_name} ${SOURCE_FILES})

#including my libs
target_link_libraries(${target_name} PRIVATE
                      self.Calculator
                      self.Hello
                      self.LanguageStandardCheck)

target_include_directories(${target_name}
    PRIVATE
        includes
    PRIVATE
        includes/third_party
    PRIVATE
        libs/includes
)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)

set(DEBUG_FLAGS
    -v
    -fdiagnostics-color=always
    -g
    -std=c++23
    -ggdb
    -Wall
    -Wextra
    -Wconversion
    -Wsign-conversion
    -pedantic-errors
    -Werror
)

set(RELEASE_FLAGS
    -v
    -fdiagnostics-color=always
    -g
    -std=c++23
    -O2
    -DNDEBUG
    -pedantic-errors
)

target_compile_options(${target_name}
    PRIVATE
    $<$<CONFIG:Debug>:${DEBUG_FLAGS}>
    $<$<CONFIG:Release>:${RELEASE_FLAGS}>
)

target_compile_definitions(${target_name}
    PRIVATE
    $<$<CONFIG:Debug>:DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
)

install(TARGETS ${target_name} DESTINATION bin)
install(FILES includes/Common.h DESTINATION include)
install(FILES includes/main_functions.h DESTINATION include)

#testing
enable_testing()
function(selectTest arg)
    add_test(NAME select${arg} COMMAND echo -e ${arg} | ${target_name} )
endfunction()

foreach(index RANGE 1 3)
    selectTest(${index})
endforeach()

add_test(NAME checkCalculatorplus COMMAND bash -c "if !(echo -e '1\n19\n+\n20' | $<TARGET_FILE:${target_name}> |tail -n 1 | tee /dev/tty | grep -q -- '39'); then echo 'Test failed: Expected output 39 not found'; exit 1; else echo 'Test Passed'; fi")
add_test(NAME checkCalculatorminus COMMAND bash -c "if !(echo -e '1\n19\n-\n20' | $<TARGET_FILE:${target_name}> |tail -n 1 | tee /dev/tty | grep -q -- '-1'); then echo 'Test failed: Expected output -1 not found'; exit 1; else echo 'Test Passed'; fi")
add_test(NAME checkCalculatormulti COMMAND bash -c "if !(echo -e '1\n19\n*\n20' | $<TARGET_FILE:${target_name}> |tail -n 1 | tee /dev/tty | grep -q -- '380'); then echo 'Test failed: Expected output 380 not found'; exit 1; else echo 'Test Passed'; fi")
add_test(NAME checkCalculatordivide COMMAND bash -c "if !(echo -e '1\n19\n/\n20' | $<TARGET_FILE:${target_name}> |tail -n 1 | tee /dev/tty | grep -q -- '0.95'); then echo 'Test failed: Expected output 0.95 not found'; exit 1; else echo 'Test Passed'; fi")
