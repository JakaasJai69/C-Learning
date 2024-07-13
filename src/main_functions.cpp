/**
 * @file main_functions.cpp
 * @author JakaasJai69 (namdeomritunjay@gmail.com)
 * @brief Main Functions.
 * @version 1.0
 * @date 2024-07-13
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <Common.h>
#include <iostream>
#include <main_Calculator.h>
#include <main_Hello.h>
#include <main_LanguageStandardCheck.h>
#include <main_functions.h>


int selectFunction()
{
  std::cout
    << "Enter the functionality you want:\n"
    << "1) Calculator (input 1 for first and so on) \n"
    << "2) Hello Program \n"
    << "3) Language Standard check \n";
  int funcNo{};
  std::cin >> funcNo;
  return funcNo;
}


int execFunction(int execCode)
{
  switch (execCode)
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
  default:
    std::cout << "Check the input.";
  }
  return 0;
}
