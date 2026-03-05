#include <iostream>

int main()
{
    char isbn[14];
    std::cin >> isbn;

    int sum = 0, k;
    for (int i = 0; i < 13; i++) {

        if (isbn[i] == '*') {
            k = (i % 2 == 0) ? 1 : 3;
        } else {
            if (i % 2 == 0) {
                sum += (static_cast<int>(isbn[i]) - 48); 
            } else {
                sum += ((static_cast<int>(isbn[i]) - 48) * 3);
            }
        }
    }

    for (int i = 0; i < 10; i ++) {
        if ((sum + (i * k)) % 10 == 0) {
            std::cout << i;
            break;
        }
    }

    return 0;
}