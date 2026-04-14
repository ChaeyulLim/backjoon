#include <iostream>

int main()
{
    
    int num, a, b, round = 1;
    
    std::cin >> num >> a >> b;

    while (a != b) {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        round++;
    }
    
    std::cout << round -1;
    return 0;
}