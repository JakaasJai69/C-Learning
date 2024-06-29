#include <Common.h>
#include <iostream>
#include <main_Hello.h>


/**
 * @brief simple hello program whicb prints, well 'hello'.
 *
 * @return success code
 */
/**
 * @brief Executes a simple "Hello, world!" program.
 *
 * This function logs a debug message and prints "Hello, world!" to the console.
 *
 * @details
 * The function performs two operations:
 * 1. Logs a debug message indicating that execHello() has been called.
 * 2. Prints "Hello, world!" to the standard output.
 *
 * @return Always returns 0, indicating successful execution.
 */
int execHello()
{
  PLOGD << "[debug: execHello() is called.]\n";
  std::cout << "Hello, world!\n";
  return 0;
}
