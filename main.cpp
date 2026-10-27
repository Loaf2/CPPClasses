#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

template <class T>
class PublicPerson
{
    public:
       T Name;
       T Foods;
       bool returnTrueOrFalse() const {
           return std::rand() % 2;
       };
       int returnSumOfTwoNums(int numA, int numB) const {
         return numA + numB;
       };
};

class PublicDog
{
  public:
      virtual void eatLeaf() {
          std::cout << "I eat leaves!" << std::endl;
      };
};

class PrivateDog : public PublicDog
{
    public:
        void eatLeaf() {
            std::cout << "I eat leaves!" << std::endl;
        };
};

int main()
{
  std::srand(std::time({}));
  PublicPerson<std::string> Person;
  PrivateDog DogOne;
  DogOne.eatLeaf();

  Person.Name = "Daniel";
  Person.Foods = "Banana, Apple";

  bool trueOrFalse = Person.returnTrueOrFalse();
  if (trueOrFalse == true)
  {
      std::cout << "Returned true" << std::endl;
  } else
  {
      std::cout << "Returned false" << std::endl;
  };
  unsigned int numA = 2;
  unsigned int numB = 4;
  std::cout << "Sum of " << numA << " and " << numB << " is " << Person.returnSumOfTwoNums(numA, numB) << std::endl;
  std::cout << "Persons name: " << Person.Name << std::endl;
  std::cout << "Persons foods: " << Person.Foods << std::endl;
  std::cout << "Input two numbers to sum." << std::endl;
  unsigned int num1, num2;
  std::cin >> num1 >> num2;
  std::cout << "Sum is: " << num1 + num2 << " ";
  for (unsigned int i = 1; i < 11; i++)
  {
      for (unsigned int j = 1; j < 11; j++)
      {
          std::cout << "Sum of I and J is: " << i + j << std::endl;
          std::cout << "Subtraction of I and J is: " << i - j << std::endl;
          std::cout << "Multiplication of I and J is: " << i * j << std::endl;
          std::cout << "Division of I and J is: " << i / j << std::endl;
          std::cout << "Power of I and J is: " << std::pow(i, j) << std::endl;
      };
  };
};
