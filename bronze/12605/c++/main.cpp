#include <iostream>
#include <string>
#include <vector>

int main()
{
    int num;
    std::vector<std::string> arr;
    std::string text, temp;

    std::cin >> num;
    std::cin.ignore();

    for (int i = 0; i < num; i++) {
        arr = {};
        std::getline(std::cin, text);
        for (char data : text) {
            if (data == ' ') {
                arr.push_back(temp);
                temp = "";
            } else {
                temp += data;
            }
        }
        arr.push_back(temp);
        temp = "";

        std::cout << "Case #" << i+1 << ':';
        for (int i = 1; i <= arr.size(); i++) {
            std::cout << " " << arr[arr.size() -i];
        }
        std::cout << '\n';
    }


    return 0;
}