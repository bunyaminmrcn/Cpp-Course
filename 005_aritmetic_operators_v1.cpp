#include <iostream>

int main() {
    int counter = 20;

    counter = counter + 1; // or counter+=1;
    counter++;
    counter--;

    counter /= 2; // same as counter = counter / 2;


    int reminder = counter % 2;
    std::cout << reminder << std::endl;

    return 0;
}