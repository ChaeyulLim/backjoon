#include <iostream>
#include <string>

int main()
{
    int n, count = 0;
    std::cin >> n;
    int num = 666;
    while (count < n) {
        if (std::to_string(num).find("666") != std::string::npos) {
            count++;
        }
        num++;
    }
    std::cout << --num;
    
    return 0;
}