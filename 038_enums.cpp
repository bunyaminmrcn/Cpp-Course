#include <iostream>

enum Day
{
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday
};

int main()
{

  Day today = wednesday;

  if(today == 3) {
    std::cout << "it is wednesday";
  }

  return 0;
}
