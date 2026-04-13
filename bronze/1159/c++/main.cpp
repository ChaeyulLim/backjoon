#include <iostream>
#include <string>
#include <map>

int main()
{   
    int num;
    std::cin >> num;
    std::map<char, int> list;
    std::string in;
    std::string answer = "";
    char temp;
    for (int i = 0; i < num; i++) {
        std::cin >> in;
        temp = in[0];
        if (list.find(temp) != list.end()) {
            list[temp] += 1;
        } else {
            list[temp] = 1;
        }
    }
    for (const auto& data : list) {
        if (data.second >= 5) {
            answer += data.first;
        }
    }

    std::cout << ((answer.length() > 0) ? answer : "PREDAJA");
    
    return 0;
}