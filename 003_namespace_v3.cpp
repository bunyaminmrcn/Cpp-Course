#include <iostream>


namespace firstNamespace {
    int x = 1;

}
namespace secondNamespace {
    int x = 2;

}

int main() {

    using namespace secondNamespace;

    // :: known as `scope resolution operator`
    std::cout << x << std::endl;
    std::cout << firstNamespace::x << std::endl;
    
    return 0;
}