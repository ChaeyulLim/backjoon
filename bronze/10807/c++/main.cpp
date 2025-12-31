#include <iostream>
#include <vector>

int main()
{
    int num, target, count = 0;
    std::cin >> num;
    std::vector<int> array(num);

    
    for (int i = 0; i < num; i++) {
        std::cin >> array[i];
    }
    
    std::cin >> target;

    for (int i = 0; i < num; i++) {
        if (target == array[i]) {
            count++;
        }
    }

    std::cout << count;
    return 0;
}