#include <iostream>

int main()
{

    // Capture lists

    double a{10};
    double b{20};

    auto func = [a, b]()
    {
        std::cout << "a + b : " << a + b << std::endl;
    };
    func();
    std::cout << "----------------" << std::endl;

    // Capturing by value

    int c{42};

    auto func1 = [c]()
    {
        std::cout << "Inner value : " << c << " &inner : " << &c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
        func1();
        ++c;
    }
    std::cout << "----------------" << std::endl;

    // Capture by reference
    int d{42};

    auto func2 = [&d]()
    {
        std::cout << "Inner value : " << d << " &inner : " << &d << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value : " << d << " &outer : " << &d << std::endl;
        func2();
        ++c;
    }
    std::cout << "----------------" << std::endl;

    return 0;
}