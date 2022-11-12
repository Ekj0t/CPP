#include <iostream>

// Variable: Declaration and definition
double weight{};

double add(double a, double b);

struct Point
{
    double m_x{};
    double m_y{};
};

int main()
{
    auto result = add(10, 20);
    std::cout << "Result: " << result << std::endl;

    Point p1;
    p1.m_x = 10;
    p1.m_y = 10;
    std::cout << p1.m_x<< ","<< p1.m_y<< std::endl;

    return 0;
}
double add(double a, double b)
{
    return a + b;
}
