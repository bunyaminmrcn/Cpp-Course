#include <iostream>

int main()
{

  std::string name = "Matrax";
  int age = 32;
  bool isMarried = false; 
  
  std::cout << &name << std::endl;
  std::cout << &age << std::endl;
  std::cout << &isMarried << std::endl;

  return 0;
}
