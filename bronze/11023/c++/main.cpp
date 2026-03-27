#include <iostream>
#include <string>

int main()
{
    std::string number, temp;
    int num = 0, sum = 0;

    std::getline(std::cin, number);
    for (char data : number) {
        if (data == ' ') {
            sum += std::stoi(temp);
            temp = "";
        } else {
            temp += data;
        }
    }

    sum += std::stoi(temp);

    std::cout << sum;

    return 0;
}