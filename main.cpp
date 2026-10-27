#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

template <class T>
class PublicPerson
{
    public:
       T Name;
       T Foods;
       bool returnTrueOrFalse() const {
           return std::rand() % 2;
       };
};

int main()
{
  std::srand(std::time({}));
  PublicPerson<std::string> Person;

  Person.Name = "Daniel";
  Person.Foods = "Banana, Apple";

  bool trueOrFalse = Person.returnTrueOrFalse();
  if (trueOrFalse == true)
  {
      std::cout << "returned true" << std::endl;
  } else
  {
      std::cout << "returned false" << std::endl;
  };
  std::cout << "Persons name: " << Person.Name << std::endl;
  std::cout << "Persons foods: " << Person.Foods << std::endl;
  std::cout << "Input two numbers to sum." << std::endl;
  unsigned int num1, num2;
  std::cin >> num1 >> num2;
  std::cout << "Sum is: " << num1 + num2 << " ";
  for (unsigned int i = 0; i < 10; i++)
  {
      for (unsigned int j = 0; j < 10; j++)
      {
          std::cout << "i is: " << i << " ";
          std::cout << "j is: " << j << " ";
          std::cout << "i + j " << i + j << " ";
      };
  };
};
