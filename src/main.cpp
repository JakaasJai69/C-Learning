/**
 * @file main.cpp
 * @author JakaasJai69 (namdeomritunjay@gmail.com)
 * @brief Main file.
 * @version 1.0
 * @date 2024-07-13
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <Common.h>
#include <main_functions.h>

/**
 * @brief The main entry point of the program.
 *
 * This function initializes logging based on the build configuration (DEBUG or NDEBUG),
 * calls selectFunction() to get user input, and then executes the chosen function
 * using execFunction().
 *
 * @details
 * - If DEBUG is defined, logging is initialized at debug level.
 * - If NDEBUG is defined, logging is disabled.
 * - The program flow is logged at debug level.
 * - The user is prompted to select a function, which is then executed.
 *
 * @see execFunction()
 * @see selectFunction()
 *
 * @return Returns 0 on successful execution.
 */
int main()
{
  #ifdef DEBUG
    plog::init(plog::debug, "Logfile.txt");
  #endif
  #ifdef NDEBUG
    plog::init(plog::none, "Logfile.txt");
  #endif

  PLOGD << "[debug: main() is called.]\n";

  int selectedFunction{selectFunction()}; //stores the user selected function from terminal.
  execFunction(selectedFunction);

  return 0;
}
