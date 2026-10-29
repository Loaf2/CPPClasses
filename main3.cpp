#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time({}));
    std::cout << "Select inclusion number range. First Number" << std::endl;
    unsigned int first_number, second_number;
    std::cin >> first_number;
    std::cout << "Second Number:" << std::endl;
    std::cin >> second_number;
    unsigned int random_number;
    random_number = rand() % second_number / 2;
    bool printed_random_number = false;
    if (random_number > first_number && random_number < second_number)
    {
        std::cout << "Random number generated: " << random_number;
        printed_random_number = true;
    } else
    {
        while (random_number > first_number && random_number < second_number)
        {
            random_number = std::rand() % second_number / 2;
        };
    };
    if (printed_random_number == false)
    {
        std::cout << "Random number generated: " << random_number;
    };
};