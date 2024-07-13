/**
 * @file main_LanguageStandardCheck.h
 * @author JakaasJai69 (namdeomritunjay@gmail.com)
 * @brief Declarations for Language standard check.
 * @version 1.0
 * @date 2024-07-13
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef MAIN_LANGUAGE_STANDARD_CHECK_H
#define MAIN_LANGUAGE_STANDARD_CHECK_H

/**
 * @brief Determines the C++ standard being used by the compiler.
 *
 * This function attempts to determine the C++ standard being used by the compiler.
 * It handles different compiler-specific macros to get this information.
 *
 * @details
 * The function uses the following logic:
 * 1. For Visual Studio 2015 or newer, it uses _MSVC_LANG.
 * 2. For older versions of Visual Studio, it returns -1.
 * 3. For other compilers, it uses the standard __cplusplus macro.  *
 *
 */
int execLanguageStandardCheck();

/**
 * @brief Executes a check to determine and display the C++ language standard being used.
 *
 * This function calls getCPPStandard() to determine the C++ standard,
 * then matches it against known standards to provide a human-readable output.
 *
 * @details
 * The function performs the following steps:
 * 1. Calls getCPPStandard() to get the C++ standard code.
 * 2. If the standard can't be determined, it displays an error message.
 * 3. Compares the returned code against known standard codes.
 * 4. Outputs the matching C++ standard version or indicates if it's a preview/pre-release version.
 *
 */
long getCPPStandard();

#endif

