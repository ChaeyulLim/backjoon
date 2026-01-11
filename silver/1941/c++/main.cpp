#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::cin >> text;
    std::string letter[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count = 0;
    for (int i = 0; i < text.size(); i++) {
        for (std::string data : letter) {
            if (data.size() + i > text.size()) {
                continue;
            }
            if (data.size() == 2) {
                if (text[i] == data[0] && text[i +1] == data[1]) {
                    i += 1;
                    break;
                }
            } else {
                if (text[i] == data[0] && text[i +1] == data[1] && text[i +2] == data[2]) {
                    i += 2;
                    break;
                }
            }
        }
        count++;
    }
    std::cout << count; 

    return 0;
}