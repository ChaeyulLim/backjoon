#include <iostream>
#include <stack>

int main()
{
    int num, number, count = 0;
    std::stack<int> array;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> number;
        if (number == 0) { array.pop();
        } else { array.push(number); }
    }
    while (array.size()) {
        count += array.top();
        array.pop();
    }
    std::cout << count;
    return 0;
}