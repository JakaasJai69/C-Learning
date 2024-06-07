#!/bin/bash

echo "Which project do you want to compile:"
echo "1. C-Learning\n"
read projectN
rootPath="/root/Projects/C-Learning"
filesPath="$rootPath/main.cpp $rootPath/Calculator/main_Calculator.cpp $rootPath/Hello_Program/main_Hello.cpp $rootPath/Language_Standard_Check/main_LanguageStandardCheck.cpp"

# Check if the first argument is 'y' or 'n'
echo "do you want a debug build (y or n):"
read debug

if [[ $debug == "y" || $debug == "n" ]]; then
    option=$debug
else
    echo "Invalid option. Please provide 'y' or 'n' as the first argument."
    exit 1
fi

for file in $filesPath; do
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

#set appropriate permissions
chmod -R a+rwx $rootPath
echo "setting appropriate permissions"

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
