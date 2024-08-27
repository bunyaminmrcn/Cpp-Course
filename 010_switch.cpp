#include <iostream>
#include <cmath>

// see the reference at:
// https://cplusplus.com/reference/cmath/

int main()
{

  int month;
  std::cout << "Enter index of month: ";
  std::cin >> month;

  switch (month)
  {
  case 0:
    std::cout << "Jan";
    break;
  case 1:
    std::cout << "Feb";
    break;
  case 2:
    std::cout << "March";
    break;
  case 3:
    std::cout << "April";
    break;
  case 4:
    std::cout << "May";
    break;
  case 5:
    std::cout << "June";
    break;
  case 6:
    std::cout << "July";
    break;
  case 7:
    std::cout << "Aug";
    break;
  case 8:
    std::cout << "Sep";
    break;
  case 9:
    std::cout << "Oct";
    break;
  case 10:
    std::cout << "Dec";
    break;
  case 11:
    std::cout << "Feb";
    break;
  default:
    break;
  }
  return 0;
}