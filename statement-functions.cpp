#include <iostream>

int Add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int addNumber(int x, int y)
{
    int result = x + y;
    return result;
}

int multiplied(int a, int b)
{
    return a*b;
}
int main()
{
    int firstNo = 10;
    int secondNo = 7;
    int sum = Add(firstNo, secondNo);
    int subtract = firstNo - secondNo;
    int multiply = firstNo * secondNo;
    int divide = firstNo / secondNo;
    int modulus = firstNo % secondNo;
    std::cout << "Hello World" << std::endl;
    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The subtract is: " << subtract << std::endl;
    std::cout << "The multiply is: " << multiply << std::endl;
    std::cout << "The divide is: " << divide << std::endl;
    std::cout << "The modulus is: " << modulus << std::endl;
    std::cout << "The sum is: " << Add(10, 17) << std::endl;

    // Statement are most basic unit in c++ program
    int abb{13}; 
    int bbb{7};

    std::cout << "value of a is: " << abb << std::endl;
    std::cout << "value of b is: " << bbb << std::endl;

    sum = addNumber(55, 100);
    std::cout << "Using the function: " << sum << std::endl;

    std::cout << "Using the function: " << multiplied(5,15) << std::endl;

    return 0;
}
