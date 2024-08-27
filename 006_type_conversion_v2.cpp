#include <iostream>

int main() {
    

    int corrects = 8;
    int questions = 10;

    double score = corrects / (double)questions * 100;
    std::cout << score << std::endl;

    return 0;
}