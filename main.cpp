#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

class PublicPerson
{
    public:
       std::string Name;
       std::string Foods;
       virtual bool returnTrueOrFalse() const {
           return std::rand() % 2;
       };
       virtual int returnSumOfTwoNums(int numA, int numB) const {
         return numA + numB;
       };
       virtual int returnSubtractionOfTwoNums(int numA, int numB) const {
         return numA - numB;
       };
};

class PrivatePerson : public PublicPerson
{
    public:
        int returnSubtractionOfTwoNums(int numA, int numB) const {
          return numA - numB;
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
  PublicPerson Person;
  PrivatePerson PrivatePersonObject;
  PublicDog DogOne;
  PrivateDog DogTwo;
  DogTwo.eatLeaf();

  Person.Name = "Daniel";
  Person.Foods = "Banana, Apple";

  std::cout << "Subtraction of two nums: " << std::endl;
  int subNumA, subNumB;
  std::cout << "Input two nums to subtract: " << std::endl;
  std::cin >> subNumA >> subNumB;
  std::cout << PrivatePersonObject.returnSubtractionOfTwoNums(subNumA, subNumB) << std::endl;

  bool trueOrFalse = Person.returnTrueOrFalse();
  if (trueOrFalse == true)
  {
      std::cout << "Returned true" << std::endl;
  } else
  {
      std::cout << "Returned false" << std::endl;
  };
  unsigned int numA = 2, numB = 4;
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
