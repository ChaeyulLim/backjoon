#include <iostream>
#include <vector>
#include <queue>


int main()
{
    int n, k;
    std::cin >> n >> k;

    std::queue<int> _queue;
    std::vector<int> array;

    int index = 0;
    int data;
    
    for (int i = 1; i <= n; i++) {
        _queue.push(i);
    }

    while (! _queue.empty()) {
        for (int i = 0; i < k -1; i++) {
            _queue.push(_queue.front());
            _queue.pop();
        }
        array.push_back(_queue.front());
        _queue.pop();
    }

    std::cout << '<';
    for (int i = 0; i < array.size(); i++) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << array[i];
    }
    std::cout << '>';


    return 0;
}