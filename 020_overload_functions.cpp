#include <iostream>

std::string bake();
std::string bake(std::string bakeType);

int main()
{

  std::string bType = "pizza";

  std::string fullBake1 = bake();
  std::string fullBake2 = bake(bType);

  std::cout << fullBake1 << std::endl;
  std::cout << fullBake2 << std::endl;

  return 0;
}

std::string bake()
{
  std::string cake = "cake";
  return cake.append(" is baking");
}

std::string bake(std::string bakeType)
{
  return bakeType.append(" is baking");
}
