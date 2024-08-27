#include <iostream>

int main()
{

    // calculation priority
    // 1. parenthesis
    // 2. mult & div
    // 3. add & sub
    int calculate = 3 - 2 * 4 + 5 / 3;

    std::cout << calculate << std::endl;
    return 0;
}