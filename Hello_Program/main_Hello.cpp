// #define DEBUG 
//uncomment for debug build
#include <iostream>
#include <main_Hello.h>

int execHello()
{
  #ifdef DEBUG
  std::cerr << "[debug: execHello() is called.]\n";
  #endif
  
  std::cout << "Hello, world!\n";
  return 0;
}
