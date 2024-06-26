#include <iostream>
#include <main_Hello.h>
#include <Common.h>


int execHello()
{

  PLOGD << "[debug: execHello() is called.]\n";

  
  std::cout << "Hello, world!\n";
  return 0;
}
