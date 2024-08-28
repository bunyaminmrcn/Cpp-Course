#include <iostream>

// `const` keyword is making variables as read-only
void printInt(const int x, const int y);
int main()
{

  int x = 3;
  int y = 4;

  printInt(x, y);
  std::cout << x << std::endl;
  std::cout << y << std::endl;

  return 0;
}

void printInt(const int x, const int y)
{

  // you cant
  // x = 5;
  // y = 6; etc.
  std::cout << x << std::endl;
  std::cout << y << std::endl;
}