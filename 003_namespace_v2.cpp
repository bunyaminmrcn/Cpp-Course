#include <iostream>


namespace firstNamespace {
    int x = 1;

}
namespace secondNamespace {
    int x = 2;

}

int main() {

    int x = 0;

    // :: known as `scope resolution operator`
    std::cout << firstNamespace::x << std::endl;

    return 0;
}