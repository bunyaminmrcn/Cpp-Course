#include <iostream>

struct Student
{
  std::string name;
  int rating;
  bool proMember;
};
void printStudent(Student &student);

int main()
{

  Student student1;
  student1.name = "Matrax";
  student1.proMember = true;
  student1.rating = 97;

  printStudent(student1);
  std::cout << &student1 << std::endl;

  return 0;
}

void printStudent(Student &student)
{

  std::cout << &student << std::endl;
  std::cout << student.name << std::endl;
  std::cout << student.rating << std::endl;
  std::cout << student.proMember << std::endl;
}