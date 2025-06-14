/*

Write a program that asks the user to enter their full name and their age. As output, tell the user the sum of their age and the number of characters in their name (use the std::string::length() member function to get the length of the string). For simplicity, count any spaces in the name as a character.

*/

#include <iostream>
#include <string>

int main(){

  std::cout << "Enter your Name:\n";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  std::cout << "Enter your Age:\n";
  int age{};
  std::cin >> age;

  std::cout << "The sum of No. of words in '" << name << "' and Your age '" << age << "' is " << static_cast<int>(name.length()) + age << '\n';
}