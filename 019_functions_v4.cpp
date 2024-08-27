#include <iostream>

double square(double num);

int main()
{


  double num1 = 3;

  double squareOf3 = square(num1);
  std::cout << squareOf3 << std::endl;

  
  return 0;
}

double square(double num)
{
  return num * num;
}
