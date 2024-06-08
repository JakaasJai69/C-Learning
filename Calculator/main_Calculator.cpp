#include <iostream>
#include <string>
#include <main_Calculator.h>
#include <Common.h>


//A terminal based basic two input calculator.
int execCalculator()
{

  PLOGD << "[debug: execCalculator() is called.]\n";


  /* Steps:
  1) User gets prompted to input first number.
  2) User gets prompted to input Operation to be performed.
  3) User gets prompted to input Second number.
  4) User terminal gets printed with the output of opertaion done on first and
     second number.
  5) exit
  */
  
  std::cout << "Input your first Number: \n";
  double firstInput{};
  std::cin >> firstInput;

  std::cout << "Input your Operator( '+' , '-' , '*' or '/' ): \n";
  std::string inOperator;
  std::cin >> inOperator;
  
  std::cout << "Input your second Number: \n";
  double secondInput{};
  std::cin >> secondInput;
  
  double result {};
  switch( inOperator[0] )
  {
    case '+':
      result = firstInput + secondInput;
      break;
    
    case '-':
      result = firstInput - secondInput;
      break;
    
    case '*':
      result = firstInput * secondInput;
      break;
    
    case '/':
      if (secondInput != 0)
      {
        result = firstInput / secondInput;
        break;
      }
        
      else
      {
        std::cout << "Denominator cannot be zero. \n";
        return 1;
      }
  }
  
  std::cout << "Your Output is: \n" << firstInput << " " << inOperator << " " 
            << secondInput << " = " << result << "\n";
  return 0;
}