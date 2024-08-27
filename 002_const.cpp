#include <iostream>

int main() {
    const double pi = 3.14159;
    const int SCREEN_WIDTH = 1920;
    const int SCREEN_HEIGHT = 1080;
    double radius = 2;
    double circum = 2 * pi * radius;
    
    std::cout << circum << std::endl;

    return 0;
}