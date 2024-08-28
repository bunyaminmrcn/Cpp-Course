#include <iostream>


class Animal {
  public:
    std::string name;
    double weight;
    int age;

    void eat() {
      std::cout << "This animal is eating";
    }

    void drink() {
      std::cout << "This animal is drinking";
    }

};

int main()
{

  Animal animal1;
  animal1.age = 5;
  animal1.name = "Tekir";
  animal1.weight = 3.5;


  std::cout << animal1.age << std::endl;
  std::cout << animal1.name << std::endl;
  std::cout << animal1.weight << std::endl;

  animal1.eat();

  return 0;
}
