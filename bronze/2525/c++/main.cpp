#include <iostream>

int main()
{
    int Y, M, tar;
    std::cin >> Y >> M >> tar;

    Y += tar / 60;
    M += tar % 60;

    if (M >= 60) {
        M -= 60;
        Y++;
    } if (Y >= 24) {
        Y -= 24;
    }
    
    std::cout << Y << " " << M << std::endl;

    return 0;
}