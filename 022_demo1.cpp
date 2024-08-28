#include <iostream>
#include <iomanip>

int myVar = 3;

void showBalance(double money);

int main()
{

  double balance = 123.01;
  showBalance(balance);

  return 0;
}

void showBalance(double money)
{
  std::cout << "Your balance is :₺" << std::setprecision(2) << std::fixed << money << std::endl;
}
