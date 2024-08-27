#include <iostream>

int main() {
    

    // type conversion:
    // implicit - automatic
    // explicit - manuel typing
    int x = 3.14567; // prints 3 - implicit

    double y = (int) 2.14; // prints 2 - explicit


    char ch = 100; // prints d - implicit
    std::cout << ch << std::endl;
    std::cout << (char)100 << std::endl;// prints d - explicit

    return 0;
}