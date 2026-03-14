#include <iostream>
#include <stack>
#include <string>

int main()
{
    int num, data;
    std::stack<int> _stack;
    std::string command;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> command;
        if (command == "push") {
            std::cin >> data;
            _stack.push(data);
        } else if (command == "pop") {
            if (_stack.empty()) {
                std::cout << "-1\n";
            } else {
                std::cout << _stack.top() << '\n';
                _stack.pop();
            }
        } else if (command == "size") {
            std::cout << _stack.size() << '\n';
        } else if (command == "empty") {
            std::cout << _stack.empty() << '\n';
        } else if (command == "top") {
            if (_stack.empty()) {
                std::cout << "-1\n";
            } else {
                std::cout << _stack.top() << '\n';
            }
        }
    }

    return 0;
}