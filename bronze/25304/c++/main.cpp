#include <iostream>

int main()
{
    int inPrice, totalPrice = 0, count, price, num;
    std::cin >> inPrice >> count;
    for (int i = 0; i < count; i++) {
        std::cin >> price >> num;
        totalPrice += (price * num);
    }
    std::cout << (inPrice == totalPrice ? "Yes" : "No");
    return 0;
}