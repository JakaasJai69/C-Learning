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
void integerInOut()
{

    /*
    - it uses std::cin to ask for a keyboard input.
    - stores it in a x variable
    - and prints it.
    */
    
    //for storing keyboard input
    int x {};                                          
    
    //Prompt for asking for user input
    std::cout << "Input a Number (Integer):" << "\n";  
    
    //storing the keyboard input in x
    std::cin  >> x;

    //Printing it go console
    std::cout << "You have inputted: " << x << "\n";   
}

//Test for different Types of initilizations.
void initVarOut()
{
    
    std::cout <<"Default Initilization:"     << "\n";
    std::cout << a << "\n";
    
    std::cout <<"Copy Initilization:"        << "\n";
    std::cout << b << "\n";
    
    std::cout <<"Direct Initlization:"       << "\n";
    std::cout << c << "\n";
    
    std::cout <<"Direct list Initilization:" << "\n";
    std::cout << d << "\n";
    
    std::cout <<"Copy list Initization:"     << "\n";
    std::cout << e << "\n";

    std::cout <<"Value Initilization:"       << "\n";
    std::cout << f << "\n";

}

//calculates the double of the input argument and returns it
int doubleCalc(int val)
{
    return 2 * val;
}

//asks for an inout and return it
int inputAsk()
{
    //init for storing the var input
    int inputValue {};

    //prompt for input
    std::cin  >> inputValue;

    //return the input value
    return inputValue;

}

//Asks for integed input and outputs double and triple of it.
int askIntOutDoubleTriple()
{
    //asking for input
    std::cout  << "Please input a Integer to double/triple: \n";
    
    //storing input
    int inputVal {inputAsk()};

    //Print the Double output
    std::cout  << "The Double value of " << inputVal << " is: " << inputVal * 2
               << "\n";

    //Print tbe triple value
    std::cout  << "The Triple value of " << inputVal << " is: " << inputVal * 3
               << "\n";
    return 0;
}

//Asks for twin inout and output the their sum and different 
void twinIntCal()
{
    //asks and stores first integer in num1
    std::cout << "Enter an integer: \n";
    int num1 {};
    num1 = inputAsk();

    //asks and stores first integer in num2
    std::cout << "Enter an integer Again: \n";
    int num2 {};
    num2 = inputAsk();
 
    //Outputs their sum and diffence
    std::cout << num1 << " - " << num2 << " : " << num1 - num2 << "\n"
              << num1 << " - " << num2 << " : " << num1 - num2 << "\n";

}


int main()
{
    
    // integerInOut();
    // initVarOut();
    //askIntOutDoubleTriple();
    twinIntCal();

    
    return 0;

}


