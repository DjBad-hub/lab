#include <cstdlib> 
#include <iostream>
#include <ctime>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr))); 
    std::rand(); 
    static const double base = 1/(RAND_MAX + 1);
    std::rand(); 
    static const int target_number = 1 + static_cast<int>(100*std::rand()*base);
    int user_guess = 0; 
    std::cout << " Guess a number between 1 - 100 \n"; 
    for (uint8_t i = 0; i <= 4; i++)
    {
        std::cin >> user_guess; 
        if(user_guess == target_number)
        {
            std::cout << "You win \n"; 
            break; 
        }
        else if(user_guess < target_number)
        {
            std::cout << "Guess higher \n"; 
        }
        else if(user_guess > target_number)
        {
            std::cout << "Guess lower \n"; 
        }
        else if(i == 4)
        {
            std::cout << "You lose \n"; 
        }
    }
    return 0; 
}