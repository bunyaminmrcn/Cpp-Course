#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)


int main() {
    std::string name;
    int age;

    std::cout << "What is your full name: ";

    // if you write something like this
    // its stops when enter  spaces
    // std::cin >> name;
    // so
    std::getline(std::cin,name);

    std::cout << "What is your age: ";
    std::cin >> age;

    std::cout << "Hi, " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}