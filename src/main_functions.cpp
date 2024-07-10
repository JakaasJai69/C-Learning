#include <Common.h>
#include <iostream>
#include <main_Calculator.h>
#include <main_Hello.h>
#include <main_LanguageStandardCheck.h>
#include <main_functions.h>

/**
 * @brief Prompts the user to select a function and returns their choice.
 *
 * This function displays a menu of available functionalities and asks the user
 * to input their choice. The user can choose between a calculator, a hello program,
 * and a language standard check.
 *
 * @return An integer representing the user's choice:
 *         1 for Calculator
 *         2 for Hello Program
 *         3 for Language Standard check
 */
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

/**
 * @brief Executes the function corresponding to the provided execution code.
 *
 * This function takes an execution code as input and calls the appropriate
 * function based on that code.
 *
 * @param execCode An integer representing the function to execute:
 *                 1 for Calculator
 *                 2 for Hello Program
 *                 3 for Language Standard check
 * @return Always returns 0.
 */
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
