#include <iostream>
#include "test.h"
#include "trans_includes.h"

int main()
{
    std::cout << "Does it work:\n";
    test();
    std::cout << "Does transitive includes work:\n";
    trans_includes();
}
