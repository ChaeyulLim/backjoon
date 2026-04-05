#include <iostream>
#include <string>

int main()
{
    
    long long result = 0;
    std::string a, b;
    std::cin >> a >> b;

    for (char data1 : a) {
        for (char data2 : b) {
            result += static_cast<int>(data1 - '0') * static_cast<int>(data2 - '0');
        }
    }

    std::cout << result;

    return 0;
}