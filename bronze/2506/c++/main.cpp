#include <iostream>

int main()
{

    int num, score = 0, count = 0, temp;
    std::cin >> num;
    
    for (int i = 0; i < num; i++) {
        std::cin >> temp;
        if (temp) {
            count++;
            score += count;
        } else {
            count = 0;
        }
    }
    std::cout << score;

    return 0;
}