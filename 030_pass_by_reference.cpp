#include <iostream>


void swap(int &x, int &y);
int main()
{

  int x = 3;
  int y = 4;

  swap(x, y); // pass the addresses
  std::cout << x << std::endl;
  std::cout << y << std::endl;

  return 0;
}


void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}