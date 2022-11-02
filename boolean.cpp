#include <iostream>

int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light == true) // Checking whether the condition is fulfilled or not
    {
        std::cout << "Stop!!" << std::endl;
    }
    else
    {
        std::cout << "Go through!!" << std::endl;
    }

    if (green_light) // Default set as true
    {
        std::cout << "The light is Green!" << std::endl;
    }
    else
    {
        std::cout << "The light is not Green!" << std::endl;
    }

    // sizeof()
    std::cout << "Sizeof Bool is: " << sizeof(bool) << std::endl;

    // Printing out a bool
    // 1 -->> true
    // 0 -->> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
    return 0;
}
