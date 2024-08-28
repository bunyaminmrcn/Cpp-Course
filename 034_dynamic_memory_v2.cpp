#include <iostream>

int main()
{

  int size;

  std::cout << "Enter size of grades : ";
  std::cin >> size;

  char *pGrades;
  pGrades = new char[size];

  for (int i = 0; i < size; i++)
  {
    std::cout << "Enter grade for item " << i + 1 << " :";
    // std::cin >> pGrades[i];
    // or
    std::cin >> pGrades + i;
  }

  std::cout << "array : " << *pGrades << std::endl;

  // frees the memory for pNum - its generally called as `garbage collection`

  delete[] pGrades;

  return 0;
}
