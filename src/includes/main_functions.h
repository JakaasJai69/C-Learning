/**
 * @file main_functions.cpp
 *
 * @brief Main function's definitions.
 *
 * @version 1.0
 * @author JakaasJai69 (namdeomritunjay@gmail.com)
 * @date 2024-07-13
 * @copyright Copyright (c) 2024
 */

#ifndef MAIN_FUNCTIONS_H
#define MAIN_FUNCTIONS_H

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
int selectFunction();

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
 */
int execFunction(int /*execCode*/);

#endif
