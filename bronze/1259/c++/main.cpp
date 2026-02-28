#include <iostream>
#include <vector>

int main()
{
    int num;
    bool isPalin;

    while (true) {
        std::vector<int> array;
        std::cin >> num;
        if (num == 0) { break; }
        
        while (num > 0) {
            array.push_back(num % 10);
            num /= 10;
        }

        isPalin = true;
        for (int i = 0; i < array.size() /2; i++) {
            if (array[i] != array[array.size() - i -1]) {
                isPalin = false;
                break;
            }
        }
        std::cout << ((isPalin) ? "yes" : "no") << '\n';

    }

    return 0;
}