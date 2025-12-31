#include <iostream>
#include <vector>

int main()
{
    int num, target;
    std::cin >> num >> target;
    std::vector<int> array(num);
    for (int i = 0; i < num; i++) {
        std::cin >> array[i];
    }
    for (int data : array) {
        if (target > data) {
            std::cout << data << ' ';
        }
    }
    return 0;
}