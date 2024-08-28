#include <iostream>

int main()
{

  // sizeof - pass an argument like some of these are
  // variable, data type, class, objects, etc.

  std::string colors[] = {"RED", "GREEN", "BLUE"};
  for (std::string color: colors) {
    std::cout << color << std::endl;
  }
  


  return 0;
}
