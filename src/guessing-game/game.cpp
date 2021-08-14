#include <cstdlib> 
#include <iostream>
#include <ctime>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr))); 
    std::rand(); 
    static const double base = 1/(RAND_MAX + 1);
    std::rand(); 
    static const uint8_t target_number = 1 + static_cast<uint8_t>(100*std::rand()*base);
    uint8_t user_guess = 0; 
    std::cout << " Guess a number between 1 - 100 \n"; 
    std::cin >> user_guess; 
    while(user_guess != target_number)
    {
        std::cout << " Wrong !!,  Guess again  :D ! \n"; 
        std::cin >> user_guess; 
    }
    return 0; 
}