#include <iostream>

int main()
{

  int *pNum = NULL;
  pNum = new int; // allocates in heap / not in stack
  *pNum = 13;

  std::cout << "address : " << pNum << std::endl;
  std::cout << "value : " << *pNum << std::endl;

  // frees the memory for pNum - its generally called as `garbage collection`
  delete pNum;

  return 0;
}
