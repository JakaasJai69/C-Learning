add_library(self.Calculator STATIC lib_Calculator.cpp)
add_library(self.Hello STATIC lib_Hello.cpp)
add_library(self.LanguageStandardCheck STATIC lib_LanguageStandardCheck.cpp)

target_include_directories(self.Calculator PUBLIC includes PRIVATE includes/third_party)
target_include_directories(self.Hello PUBLIC includes PRIVATE includes/third_party)
target_include_directories(self.LanguageStandardCheck PUBLIC includes PRIVATE includes/third_party)

set(installable_libs self.Calculator self.Hello self.LanguageStandardCheck)
install(TARGETS ${installable_libs} DESTINATION lib)
install(FILES includes/lib_Calculator.h DESTINATION include)
install(FILES includes/lib_Hello.h DESTINATION include)
install(FILES includes/lib_LanguageStandardCheck.h DESTINATION include)
