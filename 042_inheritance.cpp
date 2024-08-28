#include <iostream>

class Animal
{
public:
  bool alive = true;

  void eat()
  {
    std::cout << "THis animal is eating";
  }
};

class Dog : public Animal
{

public:
  void speak()
  {
    std::cout << "Whoow";
  }
};

class Cat : public Animal
{

public:
  void speak()
  {
    std::cout << "Miow";
  }
};


int main()
{

  Dog dog;
  Cat cat;

  std::cout << dog.alive << std::endl;
  dog.eat();
  dog.speak();

  cat.speak();
  
  return 0;
}
