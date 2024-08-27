#include <iostream>

void greetings(std::string name, int age);

int main()
{

  std::string name = "John";
  int age = 32;

  greetings(name, age);
  return 0;
}

void greetings(std::string name, int age)
{
  std::cout << "Hi, " << name << std::endl;
  std::cout << "You are " << age << "  years old" << std::endl;
}
