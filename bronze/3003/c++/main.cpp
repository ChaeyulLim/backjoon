#include <iostream>

int main()
{
    int num[6];
    int piece[6] = {1, 1, 2, 2, 2, 8};    
    std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5];
    for (int i = 0; i < 6; i++) {
        std::cout << (piece[i] - num[i]) << " ";
    }
    
    return 0;
}