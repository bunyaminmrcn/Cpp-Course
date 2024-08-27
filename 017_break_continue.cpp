#include <iostream>

int main()
{


  for (int i = 0; i < 30; i++)
  {

    if (i == 7)
    {
      continue; // skip current iteration
    }
    if (i == 13)
    {
      break; // break out for loop
    }

    std::cout << "Counter at: " << i << std::endl;

  }

  return 0;
}