#include <iostream>

int main()
{
    int num0, num1, num2, answer;
    std::cin >> num0 >> num1 >> num2;
    int target;
    
    if (num0 == num1 && num1 == num2) {
        std::cout << 10000 + (num0 * 1000);
    }
    else if (num0 == num1 || num1 == num2 || num0 == num2) {
        if (num0 == num1) {
            target = num0;
        } else if (num1 == num2) {
            target = num1;
        } else {
            target = num2;
        }
        std::cout << 1000 + (target * 100);
    } else {
        if (num0 > num1) {
            if (num0 > num2) {
                target = num0;
            } else {
                target = num2;
            }
        } else {
            if (num1 > num2) {
                target = num1;
            } else {
                target = num2;
            }
        }
        std::cout << target * 100;
    }
    return 0;
}

/*
같은 눈 3 : 10000 + 눈 * 1000
같은 눈 2 : 1000 + 같은 눈 * 100
전부 다른 눈 : 가장 큰 눈 * 100
*/