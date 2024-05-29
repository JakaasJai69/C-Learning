#include <iostream>

//Default Initilization
[[maybe_unused]] int a;

//copy initilization
[[maybe_unused]] int b = 5;

//direct initilization
[[maybe_unused]] int c(5);

//direct list initilization
[[maybe_unused]] int d {5};

//copy list initization
[[maybe_unused]] int e = {5};

//value initilization
[[maybe_unused]] int f {};

//Asks for a input and output it to console.
void integerInOut(){

    /*
    - it uses std::cin to ask for a keyboard input.
    - stores it in a x variable
    - and prints it.
    */

    int x {};  //for storing keyboard output
    std::cout << "Input a Number (Integer):" << "\n";  //Asking for user input
    std::cin >> x;  //storing the input in x
    std::cout << "You have inputted: " << x << "\n";  //Printing it go console

}

//Test for different Types of initilizations.
void initVarOut(){
    std::cout <<"Default Initilization:" << "\n";
    std::cout << a << "\n";
    std::cout <<"Copy Initilization:" << "\n";
    std::cout << b << "\n";
    std::cout <<"Direct Initlization:" << "\n";
    std::cout << c << "\n";
    std::cout <<"Direct list Initilization:" << "\n";
    std::cout << d << "\n";
    std::cout <<"Copy list Initization:" << "\n";
    std::cout << e << "\n";
    std::cout <<"Value Initilization:" << "\n";
    std::cout << f << "\n";

}

int main(){
    
    integerInOut();
    initVarOut();
    return 0;

}
