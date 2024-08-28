#include <iostream>

void walk(int step);

int main()
{

  walk(100);
  return 0;
}

// recursive approach
// uses much memory and process of time
void walk(int step)
{
  if (step > 0)
  {
    std::cout << "You walked a step" << std::endl;
    walk(step - 1);
  }
}