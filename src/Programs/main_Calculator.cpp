#include <Common.h>
#include <iostream>
#include <main_Calculator.h>
#include <string>

/**
 * @brief Executes a simple calculator function.
 *
 * This function prompts the user to input two numbers and an operator,
 * performs the specified arithmetic operation, and displays the result.
 *
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
 */
int execCalculator()
{
  PLOGD << "[debug: execCalculator() is called.]\n";
  std::cout << "Input your Number: \n";
  double firstInput{};
  std::cin >> firstInput;
  std::cout
    << "Input your Operator( '+' , '-' , '*' or '/' ): \n";
  std::string inOperator;
  std::cin >> inOperator;
  std::cout << "Input your Number: \n";
  double nextInput{};
  std::cin >> nextInput;
  double result{};
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
