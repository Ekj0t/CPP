#include <iostream>

int main()
{

    int max{};

    int a{35};
    int b{200};

    std::cout << std::endl;

    /*
    std::cout << "using regular if " << std::endl;
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */

    max = (a > b) ? a : b; // Ternary operator
    // uses first if true and second if false
    std::cout << "result : " << max << std::endl;

    auto result = (a > b) ? a : 22.5f; // Ternary operator
    std::cout << "max : " << result << std::endl;

    return 0;
}