#include <iostream>

template <typename T>
T maximum(T a, T b);

int main()
{
    int a{10};
    int b{23};

    double c{34.7};
    double d{23.4};

    std::string e{"hello"};
    std::string f{"world"};

    std::cout << "max(int): " << maximum(a, b) << std::endl;    // int
    std::cout << "max(double): " << maximum(c, d) << std::endl; // double
    std::cout << "max(string): " << maximum(e, f) << std::endl; // string

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b; // a and b must support the > operator, otherwise hard error.
}
