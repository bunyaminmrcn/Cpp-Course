#include <iostream>

int main()
{

  // pointer : store a memory address
  // & address of operator
  // * dereference  operator

  std::string name = "Matrax";
  std::string *pName = &name;

  std::cout << pName << std::endl;
  std::cout << *pName << std::endl;

  std::string freeCakes[3] = {"Cake1", "Cake2", "Cake3"};
  std::string *pFreeCakes = freeCakes;

  std::cout << freeCakes << std::endl;   // already prints a address
  std::cout << *pFreeCakes << std::endl; // prints first element of cakes

  return 0;
}
