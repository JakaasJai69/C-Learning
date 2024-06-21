#include <iostream>
#include <main_Calculator.h>
#include <main_Hello.h>
#include <main_LanguageStandardCheck.h>
#include <main_Functions.h>
#include <Common.h>

//Input: None
//Output: returns code for execFunction() to run respective task.
int selectFunction()
{
  std::cout << "Enter the functionality you want:\n"
            << "1) Calculator (input 1 for first and so on) \n"
            << "2) Hello Program \n"
            << "3) Language Standard check \n";
  int funcNo{};
  std::cin >> funcNo;
  return funcNo;
}

//Input: It takes code from selectFunction() to run respective task.
//Output: success code
int execFunction(int execCode)
{
  switch(execCode)
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
