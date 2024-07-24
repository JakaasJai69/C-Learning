/**
 * @file main_Calculator.cpp
 * @author JakaasJai69 (namdeomritunjay@gmail.com)
 * @brief definitions fkr calculator.
 * @version 1.0
 * @date 2024-07-13
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <Common.h>
#include <iostream>
#include <lib_Calculator.h>
#include <string>

/**
 * @details
 * The function performs the following steps:
 * 1. Logs a debug message indicating the function has been called.
 * 2. Prompts the user to input the first number.
 * 3. Prompts the user to input an operator ('+', '-', '*', or '/').
 * 4. Prompts the user to input the second number.
 * 5. Performs the specified arithmetic operation.
 * 6. Displays the result.
 *
 * @note The function handles division by zero by displaying an error message
 * and returning 1 to indicate an error.
 *
 * @return Returns 0 on successful execution, 1 if division by zero is attempted.
 *
 */
int execCalculator()
{
  PLOGD << "[debug: execCalculator() is called.]\n";
  std::cout << "Input your Number: \n";
  double firstInput{}; //stores first input.
  std::cin >> firstInput;

  std::cout
    << "Input your Operator( '+' , '-' , '*' or '/' ): \n";
  std::string inOperator;
  std::cin >> inOperator;
  std::cout << "Input your Number: \n";
  double nextInput{}; //stores next input.
  std::cin >> nextInput;
  double result{}; //stores result.
  switch (inOperator[0])
  {
  case '+':
    result = firstInput + nextInput;
    break;
  case '-':
    result = firstInput - nextInput;
    break;
  case '*':
    result = firstInput * nextInput;
    break;
  case '/':
    if (nextInput != 0)
    {
      result = firstInput / nextInput;
      break;
    }
    else
    {
      std::cout << "Denominator cannot be zero. \n";
      return 1;
    }
  }
  std::cout << "Your Output is: \n"
            << firstInput << " " << inOperator << " "
            << nextInput << " = " << result << "\n";
  return 0;
}
