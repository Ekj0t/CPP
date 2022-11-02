#include <iostream>

int main(int argc, char const *argv[])
{
    char value = 65;                               // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;

    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    std::cout << "Character1: " << character1 << std::endl;
    std::cout << "Character2: " << character2 << std::endl;
    std::cout << "Character3: " << character3 << std::endl;
    std::cout << "Character4: " << character4 << std::endl;
    std::cout << "Character5: " << character5 << std::endl;

    // One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;

    return 0;
}
