#include <iostream>

int main()
{

  // sizeof - pass an argument like some of these are
  // variable, data type, class, objects, etc.
  int size = 100;
  std::string colors[size];

  fill(colors, colors + size , "color");
  for (std::string color: colors) {
    std::cout << color << std::endl;
  }

  //return the address
  //std::cout << colors + size << std::endl;


  return 0;
}
