#include <iostream>

struct student
{
  std::string name;
  int rating;
  bool proMember;
};

int main()
{

  student student1;
  student1.name = "Matrax";
  student1.proMember = true;
  student1.rating = 97;

  std::cout << student1.name << std::endl;
  std::cout << student1.proMember << std::endl;
  std::cout << student1.rating << std::endl;

  return 0;
}