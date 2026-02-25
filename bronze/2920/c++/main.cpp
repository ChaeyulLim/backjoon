#include <iostream>

bool comparison(int *array, int target)
{

    for (int i = 0; i < 8; i++) {
        if (target == 0) {
            if (array[i] != i +1) {
                return false;
            }
        } else {
            if (array[i] != 8 - i) {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    int array[8] = {0};
    for (int i = 0; i < 8; i++) {
        std::cin >> array[i];
    }

    if (comparison(array, 0)) {
        std::cout << "ascending";
    } else if (comparison(array, 1)) {
        std::cout << "descending";
    } else {
        std::cout << "mixed";
    }

    return 0;
}