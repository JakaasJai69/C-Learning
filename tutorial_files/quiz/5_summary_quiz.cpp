/*

Write a program that asks for the name and age of two people, then prints which person is older.

*/

#include <cstdio>
#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num){

  std::string name{};
  std::cout << "Enter name for person " << num << ": \n";
  std::getline(std::cin >> std::ws, name);

  return name;
}

int getAge(std::string_view name){

  int age{};
  std::cout << "Enter " << name << "'s age:\n";
  std::cin >> age;

  return age;
}

void cmpAge(std::string_view name1, int age1, std::string_view name2, int age2){

  if(age1>age2){
    std::cout << name1 <<" is older than " << name2 << '\n';
  }
  else{
     std::cout << name2 <<" is older than " << name1 << '\n';
  }
}

int main(){
  const std::string name1{getName(1)};
  const int age1{getAge(name1)};

  const std::string name2{getName(2)};
  const int age2{getAge(name2)};

  cmpAge(name1, age1, name2, age2);

  return 0;
}

