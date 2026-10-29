#include <iostream>

template <typename T>
T StudentGetAge(T age)
{
    std::cout << "Student is " << age << " years old." << std::endl;
    return age;
};

template <class T>
class StudentClass
{
  private:
      T ageDefinition;
  public:
      StudentClass(int age = 5)
      {
          ageDefinition = age;
      };
      template<>
      inline void GetStudentsAge(int ageDefinition)
      {
        int StudentGetAge<int>(ageDefinition);
      };
};

int main()
{
  StudentClass<int> Student;
  Student.GetStudentsAge();
};
