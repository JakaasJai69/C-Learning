#!/bin/bash

echo "Which project do you want to compile:"
echo "1. C-Learning (enter 1 for first and so on)"
read projectNo

if [ "projectNo" == "1" ]
then
    projectName="C-Learning"
else
    echo "Invalid Project No."
fi

rootPath="/root/Projects/$projectName"
filesPath="$rootPath/main.cpp $rootPath/main_Functions.cpp $rootPath/Programs/*"
echo "-Weffc++ has been removed because of plog"
debugOptions="-fdiagnostics-color=always -g -std=c++23 -ggdb -Wall -Wextra -Wconversion -Wsign-conversion -pedantic-errors -Werror"
nondebugOptions="-fdiagnostics-color=always -g -std=c++23 -O2 -DNDEBUG -pedantic-errors"
includeDir="-I$rootPath/includes -I$rootPath/includes/Third_Party"

# Check if the first argument is 'y' or 'n'
echo "do you want a debug build (y or n):"
read debug

if [[ $debug == "y" || $debug == "n" ]]; then
    option=$debug
else
    echo "Invalid option. Please provide 'y' or 'n' as the first argument."
    exit 1
fi

#files to enable disable debug on first line.
debugFiles="$rootPath/includes/Common.h"

for file in $debugFiles; do
    if [[ -f "$file" ]]; then
        # Read the first line of the file
        first_line=$(head -n 1 "$file")

        # Modify the first line based on the option
        if [[ "$option" == "n" && "$first_line" != "// "* ]];
        then
            modified_line="// $first_line"

        elif [[ "$option" == "y" && "$first_line" == "// "* ]];
        then
            modified_line="${first_line:3}"  # Remove the leading "//"

        else
            modified_line="$first_line"

        fi

        # Update the file with the modified first line
        temp_file=$(mktemp)
        echo "$modified_line" > "$temp_file"
        tail -n +2 "$file" >> "$temp_file"
        mv "$temp_file" "$file"
    else
        echo "File not found: $file"
    fi
done


if [ "$projectNo" == "1" ]
then
    echo "Do you want to compile main? (y or n)"
    read compileMain
    if [ "$compileMain" == "y" ] && [ "$debug" == "y" ]
    then
        /usr/bin/g++ $debugOptions $includeDir $filesPath -o main.out
        ./main.out
    elif [ "$compileMain" == "n" ] && [ "$debug" == "y" ]
    then
        echo "Input the relative name or pathname (without / as start) of file in Project:"
        read compileFile
        /usr/bin/g++ $debugOptions $includeDir $rootPath/$compileFile -o $(basename "$compileFile").out
        ./$(basename "$compileFile").out
    elif [ "$compileMain" == "y" ] && [ "$debug" == "n" ]
    then
        /usr/bin/g++ $nondebugOptions $includeDir $filesPath -o main.out
        ./main.out
    elif [ "$compileMain" == "n" ] && [ "$debug" == "n" ]
    then
        echo "Input the relative name or pathname (without / as start) of file in Project:"
        read compileFile
        /usr/bin/g++ $nondebugOptions $includeDir $rootPath/$compileFile -o $(basename "$compileFile").out
        ./$(basename "$compileFile").out
    fi
fi
