#include <iostream>
#include <cmath>

// see the reference at:
// https://cplusplus.com/reference/cmath/

int main() {
    
   int age;
   std::cout << "Enter your age: ";
   std::cin >> age;
   
   if(age > 18) {
    std::cout << "You can drive!" << std::endl;
   } else if(age == 18) {
     std::cout << "You can take a driver license" << std::endl;
    } else {
    std::cout << "Wait to the age 18" << std::endl;
   }

    return 0;
}