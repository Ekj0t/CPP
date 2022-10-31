#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World" << std::endl;

    std::cout << "The number is " << 12 << std::endl;
    int age{17};
    std::cout << "The age is" << age << std::endl;

    std::cerr << "std::cerr output: Something went wrong" << std::endl;

    std::clog << "std::clog output: This is a log message" << std::endl;

    // Get data in cpp
    int age1;
    std::string name;

    std::cout << "PLease enter your name and age: " << std::endl;
    // std::cin takes data from console and stores to the variable or string
    std::cin >> name;
    std::cin >> age1;
    std::cout << "Hello " << name << " you are " << age1 << " years old" << std::endl;
    // OR
    std::cin >> name >> age1;
    std::cout << "Hello " << name << " you are " << age1 << " years old" << std::endl;

    // Taking data with spaces
    std::string full_name;
    int age3;
    std::cout << "Please enter your full name and age" << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hello " << full_name << " you are " << age3 << " years old!" << std::endl;

    return 0;
}
