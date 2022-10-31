#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
    /*
    Types of errors and warnings:
    1. Compile Time Error
    2. Runtime Error
    3. Warnings
    */
    /*
    1. Compile Time Error
    error: std::cout<< "Hello World"<< std::endl
    error-and-warning.cpp:14:5: error: expected ';' before 'return'
    return 0;
    ^~~~~~
    */

    /*
    1. RunTime Error
    error: 7/0;
    error-and-warning.cpp:26:6: warning: division by zero [-Wdiv-by-zero]
    7/0;
    ~^~
    Build finished with error(s).
    */

    /*
    1. Warning Error
    error: std::cout<< "Hello World"<< std::endl
    error-and-warning.cpp:14:5: error: expected ';' before 'return'
    return 0;
    ^~~~~~
    */
    return 0;
}
