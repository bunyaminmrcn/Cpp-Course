#include <iostream>

int max(int x, int y)
{
  return x > y ? x : y;
}
double max(double x, double y)
{
  return x > y ? x : y;
}
char max(char x, char y)
{
  return x > y ? x : y;
}

int main()
{

  std::cout << max(3.2, 4.2) << std::endl;
  return 0;
}