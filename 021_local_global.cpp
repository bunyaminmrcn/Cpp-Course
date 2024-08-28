#include <iostream>

int myVar = 3;

void printNum();

int main()
{

  int myVar = 2;
  printNum();
  std::cout << myVar << std::endl;
  std::cout << ::myVar << std::endl;

  return 0;
}

void printNum()
{
  int myVar = 1;
  std::cout << myVar << std::endl;
}
