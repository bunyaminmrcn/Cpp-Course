#include <iostream>

void walk(int step);

int main()
{

  walk(100);
  return 0;
}

// iterative approach
void walk(int step)
{
  for (int i = 0; i < step; i++)
  {
    std::cout << "You walked a step" << std::endl;
  }
}