// #define DEBUG 
//uncomment for debug build

#include <iostream>
#include <main_Calculator.h>
#include <main_Hello.h>
#include <main_LanguageStandardCheck.h>

int main()
{
  #ifdef DEBUG
  std::cerr << "[debug: main() is called.]\n";
  #endif
  
  std::cout << "Enter the functionality you want:\n"
            << "1) Calculator (input 1 for first and so on) \n"
            << "2) Hello Program \n"
            << "3) Language Standard check \n";
  
  int execFunc{};
  std::cin >> execFunc;
  
  switch(execFunc)
  {
    case 1:
      execCalculator();
      break;
    
    case 2:
      execHello();
      break;
    case 3:
      execLanguageStandardCheck();
      break;
  }
  return 0;
}
