#!/bin/bash

echo "Which project do you want to compile:"
echo "1. C-Learning\n"
read projectN
rootPath="/root/Projects/C-Learning"
filesPath="$rootPath/main.cpp $rootPath/Calculator/main_Calculator.cpp $rootPath/Hello_Program/main_Hello.cpp $rootPath/Language_Standard_Check/main_LanguageStandardCheck.cpp"

if [ $projectN = "1" ]
then
    echo "Do you want to compile main? (y or n)"
    read compileMain

    if [ "$compileMain" = "y" ]
    then
        /usr/bin/g++ -fdiagnostics-color=always -g -std=c++23 -ggdb -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -I/root/Projects/C-Learning/includes -Werror $filesPath -o main.out
        ./main.out
    else
        echo "Input the relative name or pathname (without / as start) of file in Project:"
        read compileFile
        /usr/bin/g++ -fdiagnostics-color=always -g -std=c++23 -ggdb -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -I/root/Projects/C-Learning/includes -Werror /root/Projects/C-Learning/$compileFile -o $(basename "$compileFile").out
        ./$(basename "$compileFile").out
    fi
fi
