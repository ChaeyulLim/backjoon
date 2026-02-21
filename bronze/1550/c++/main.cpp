#include <iostream>

int main()
{
    char jinsu[7] = {'\0'};
    std::cin >> jinsu;
    int num, result = 0, count = 6;
    for (char data : jinsu) {
        if (data == '\0') {
            break;
        }
        num = static_cast<int>(data);
        if (data > 57) {
            num -= 55;
        } else {
            num -= 48;
        }
        
        result = result * 16 + num;
    }
    std::cout << result;
    return 0;
}