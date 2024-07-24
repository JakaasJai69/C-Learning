/**
 * @file main_Hello.cpp
 * @author JakaasJai69 (namdeomritunjay@gmail.com)
 * @brief Functions for Hello Program.
 * @version 0.1
 * @date 2024-07-13
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <Common.h>
#include <iostream>
#include <lib_Hello.h>

/**
 *@details
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
