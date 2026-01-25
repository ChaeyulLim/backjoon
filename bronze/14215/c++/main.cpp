#include <iostream>


int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int target = 0, sum = 0;
    if (a > b && a > c) {
        target = a;
        sum = b + c;
    }
    if (b > a && b > c) {
        target = b;
        sum = a + c;
    } 
    if (c > a && c > b) {
        target = c;
        sum = a + b;
    }
    if (target == 0) {
        target = a + b + c;
    } else {
        if (target < sum) {
            target += sum;
        } else {
            target = sum + sum -1;
        }
    }

    std::cout << target;
    return 0;
}