#include <iostream>


// see the reference at:
// https://cplusplus.com/reference/string/

int main()
{

  std::string name;

  std::cout << "Enter your full-name: ";
  std::getline(std::cin, name); // enter "Matrax Zekirdek"

  if (name.length() >= 13)
  {
    std::cout << "Your name is over than 13" << std::endl;
  }

  if (name.empty())
  {
    std::cout << "Your didnt enter any name" << std::endl;
  }

  //name.clear()
  //name.at(0) // prints 'M'

  name.append("@domain.com");
  name.insert(0, "Hi, ");
  int index = name.find(' ');
  name.erase(0, 3); // remove portion of between indexes
  std::cout << name << " " << index << std::endl;


  return 0;
}