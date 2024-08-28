#include <iostream>

class Animal
{
public:
  std::string getCodeName()
  {
    return this->codeName;
  }
  void setCodeName(std::string cName)
  {
    this->codeName = cName;
  }

private:
  std::string codeName;
};

int main()
{

  Animal animal1;
  animal1.setCodeName("TRK");
  std::cout << animal1.getCodeName() << std::endl;

  return 0;
}
