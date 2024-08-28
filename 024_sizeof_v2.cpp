#include <iostream>

int main()
{

  // sizeof - pass an argument like some of these are
  // variable, data type, class, objects, etc.

  std::string colors[] = {"RED", "GREEN", "BLUE"};
  for (int i = 0; i < sizeof(colors) / sizeof(std::string); i++)
  {
    /* code */
    std::cout << colors[i] << std::endl;
  }
  


  return 0;
}
