#include <iostream>
#include <random>

void game()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);
    int randomaiser = distrib(gen);

    int n = 0;
    std::cout << "ugadaite chislo: " << std::endl;
    std::cin >> n;
    while (n != randomaiser)
    {
        if (n > randomaiser)
        {
            std::cout << "Less" << std::endl;
        }
        else
        {
            std::cout << "Greater" << std::endl;
        }
        std::cin >> n;
    }
    std::cout << "Pozdravlau vi ugadali !:  " << randomaiser << std::endl;
}
int main()
{
    game();
    return 0;
}