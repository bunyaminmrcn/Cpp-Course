#include <iostream>

int main()
{

  int number;
  

  do 
  {
    std::cout << "Enter positive number: ";
    std::cin >> number;
  } while (number < 0);

  std::cout << number << std::endl;
  
  return 0;
}