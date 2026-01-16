#include <iostream>

int main()
{
    int num, cent;
    std::cin >> num;
    
    for (int i = 0; i < num; i++) {
        std::cin >> cent;
        for (int data : {25, 10, 5}) {
            std::cout << cent / data << ' ';
            cent %= data;
        }
        std::cout << cent << '\n';
    }

    return 0;
}