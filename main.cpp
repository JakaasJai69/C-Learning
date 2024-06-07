#include <iostream>
#include <mainCalc.h>
#include <mainHello.h>

int main()
{
  std::cout << "Enter the functionality you want:\n"
            << "1) Calculator (input 1 for first and so on)\n"
            << "2) Hello Program\n";
  
  int execFunc{};
  std::cin >> execFunc;
  
  switch(execFunc)
  {
    case 1:
      execCalc();
      break;
    
    case 2:
      execHello();
      break;
  }
  return 0;
}
