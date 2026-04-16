#include <iostream>
#include <string>

int main()
{
    int num;
    std::cin >> num;
    std::string target;
    std::cin >> target;

    char temp = target[0];
    for (int i = 2; i < target.size(); i += 2) {
        if (temp != target[i]) {
            std::cout << "No";
            return 0;
        }   

    }

    std::cout << "Yes";

    return 0;
}