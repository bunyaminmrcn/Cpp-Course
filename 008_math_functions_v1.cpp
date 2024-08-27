#include <iostream>
#include <cmath>

// see the reference at:
// https://cplusplus.com/reference/cmath/

int main() {
    double x = 3.78;
    double y = 4;
    double z;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(3, 2);
    //z = sqrt(9);
    //z = abs(-5);
    z = round(x); // closest int
    //z = ceil(x); // always up
    //z = floor(x);; // always down

    std::cout << z << std::endl;

    return 0;
}