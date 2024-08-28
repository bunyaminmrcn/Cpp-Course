#include <iostream>

int main()
{

  int *pointer = nullptr;
  int x = 1071;

  pointer = &x;

  if (pointer == nullptr)
  {
    std::cout << "adress is  not assigned\n";
  }
  else
  {
    std::cout << "adress is assigned\n";
    std::cout << *pointer << std::endl;
  }

  return 0;
}
