#include <iostream>

int main()
{
    int Y, M;
    std::cin >> Y >> M;
    if (M < 45) {
        Y--;
        M += 15;
    } else {
        M -= 45;
    } if (Y < 0) {
        Y += 24;
    }
    std::cout << Y << " " << M;
    return 0;
}