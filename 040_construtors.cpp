#include <iostream>

class Animal
{
public:
  std::string name;
  double weight;
  int age;

  void eat()
  {
    std::cout << "This animal is eating";
  }

  void drink()
  {
    std::cout << "This animal is drinking";
  }
  Animal(std::string name, int age, double weight)
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
  }
};

int main()
{

  Animal animal1("Tekir", 2, 3.4);

  std::cout << animal1.age << std::endl;
  std::cout << animal1.name << std::endl;
  std::cout << animal1.weight << std::endl;

  return 0;
}
