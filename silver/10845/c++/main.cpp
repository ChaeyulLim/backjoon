#include <iostream>
#include <queue>

int main()
{
    int num, data;
    std::queue<int> _queue;
    std::string command;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> command;
        if (command == "push") {
            std::cin >> data;
            _queue.push(data);
        } else if (command == "pop") {
            if (_queue.empty()) {
                std::cout << "-1\n";
            } else {
                std::cout << _queue.front() << '\n';
                _queue.pop();
            }
        } else if (command == "size") {
            std::cout << _queue.size() << '\n';
        } else if (command == "empty") {
            std::cout << _queue.empty() << '\n';
        } else if (command == "front") {
            if (_queue.empty()) {
                std::cout << "-1\n";
            } else {
                std::cout << _queue.front() << '\n';
            }
        } else if (command == "back") {
            if (_queue.empty()) {
                std::cout << "-1\n";
            } else {
                std::cout << _queue.back() << '\n';
            }
        }
    }

    return 0;
}