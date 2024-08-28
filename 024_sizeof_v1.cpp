#include <iostream>

int main()
{

  // sizeof - pass an argument like some of these are
  // variable, data type, class, objects, etc.

  int twenteTwo = 22;
  std::cout << sizeof(twenteTwo) << " bytes\n";
  std::cout << sizeof(int) << " bytes\n";

  char grade = 'C';
  std::cout << sizeof(grade) << " bytes\n";

  bool isActive = true;
  std::cout << sizeof(isActive) << " bytes\n";

  std::string name = "Matrax";
  std::cout << sizeof(name) << " bytes\n";

  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  std::cout << sizeof(grades) / sizeof(char)  << " elements\n";


  return 0;
}
