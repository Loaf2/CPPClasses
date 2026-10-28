#include <iostream>

template <class T>
class TemplateParameter
{
    public:
        T FoodName;
        T ItemName;
};

int main()
{
  TemplateParameter<std::string> InstTemplateParameter;

  InstTemplateParameter.FoodName = "Banana";
  InstTemplateParameter.ItemName = "Book";

  std::string FoodNameInTemplate = InstTemplateParameter.FoodName;
  std::string ItemNameInTemplate = InstTemplateParameter.ItemName;

  std::cout << "Template Food Name " << FoodNameInTemplate << " Template Item Name " << ItemNameInTemplate << std::endl;
};
