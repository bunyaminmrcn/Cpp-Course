#include <iostream>

// template <typename T>
template <typename T, typename U>

// auto keyword detects of return type should be
auto max(T x, U y)
{

  // we dont know the which will be returned
  return x > y ? x : y;
}

int main()
{

  std::cout << max(3.2, 4.2) << std::endl;
  std::cout << max(3, 4) << std::endl;
  std::cout << max('I', 'K') << std::endl;
  std::cout << max(2, 'K') << std::endl;

  return 0;
}