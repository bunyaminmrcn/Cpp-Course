#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)


int main() {
    std::string name;
    int age;

    std::cout << "What is your age: ";
    std::cin >> age;
    std::cout << "What is your full name: ";

    // if you write cin and its after getline
    // you must white like this to work properly
    
    std::getline(std::cin >> std::ws,name);

    std::cout << "Hi, " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}