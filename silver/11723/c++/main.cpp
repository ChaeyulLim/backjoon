#include <iostream>
#include <set>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int num;
    std::cin >> num;
    std::set<int> array;
    std::string command;
    int trigger;

    for (int i = 0; i < num; i++) {
        std::cin >> command;
        if (command == "all") {
            array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

        } else if (command == "empty") {
            array.clear();

        } else {
            std::cin >> trigger;
            if (command == "add") {
                array.insert(trigger);
            } else if (command == "remove"){
                array.erase(trigger);
            } else if (command == "check") {
                std::cout << array.count(trigger) << '\n';
            } else if (command == "toggle") {
                if (array.count(trigger) == 0) {
                    array.insert(trigger);
                } else {
                    array.erase(trigger);
                }
            }
        }
    }

    return 0;
}