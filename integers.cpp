#include <iostream>

int main(int argc, char const *argv[])
{
    // Braced Intializers
    // Variables may contain random garbage value. WARNING
    int elephant_count;

    int lion_count{};  // Initializes to zero
    int dog_count{10}; // Initializes to 10
    int cat_count{15}; // Initializes to 15

    // Can use expression as initializer
    int domestic_animals{dog_count + cat_count}; // Give 25

    // int narrow_conversion{2.9}; //Compiler error

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domestic count: " << domestic_animals << std::endl;

    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    int narrow_conversion_functional(2.9);
    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;
    std::cout << "narrow conversion functional: " << narrow_conversion_functional << std::endl;

    // Assingment notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrow_conversion_assingment = 2.9;

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "narrow conversion assingment: " << narrow_conversion_assingment << std::endl;

    // Check the size with sizeof
    std::cout<<"Sizeof int: "<< sizeof(int)<< std::endl;
    std::cout<<"Sizeof truck_count: "<< sizeof(truck_count)<< std::endl;

    return 0;
}
