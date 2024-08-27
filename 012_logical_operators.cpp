#include <iostream>

int main()
{

  double temp;
  bool isSunny = false;

  std::cout << "Enter temperature: ";
  std::cin >> temp;

  if(temp >= 25 && temp <= 35) {
    std::cout << "Temperature is OK" << std::endl;
  }
  
  if(temp < 0 || temp > 45) {
    std::cout << "Temperature so cold or so hot" << std::endl;
  }

  if(!isSunny) {
    std::cout << "Logical NOT op." << std::endl;
  }
  
  return 0;
}