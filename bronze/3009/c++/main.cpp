#include <iostream>

int main()
{
    int x[3], y[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> x[i] >> y[i];
    }
    
    int resultX = x[0] ^ x[1] ^ x[2];
    int resultY = y[0] ^ y[1] ^ y[2];    
    std::cout << resultX << " " << resultY;
    
    return 0;
}