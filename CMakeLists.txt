#set req
cmake_minimum_required(VERSION 3.10)

#Intro
project(C-Learning VERSION 1.0 DESCRIPTION "Simple C++ Learning Porject" LANGUAGES CXX)

#Set up compile files
set(SOURCE_FILES
    src/main.cpp
    src/main
    src/main_functions.cpp
    src/Programs/main_Calculator.cpp
    src/Programs/main_Hello.cpp
    src/Programs/main_LanguageStandardCheck.cpp
    # ... add all your .cpp files here
)

set (target_name
    main.out
)
#for clangd compilation database
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(${target_name} ${SOURCE_FILES})

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

target_include_directories(${target_name}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/includes
    SYSTEM PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/includes/Third_Party
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
