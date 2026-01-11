#include <iostream>
#include <string>

int main()
{
    int num, count = 0;
    char choiceText;
    std::string text;
    std::cin >> num;

    int alphabet[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


    for (int i = 0; i < num; i++) {
        std::cin >> text;
        choiceText = text[0];
        int j;
        for (j = 0; j < text.size(); j++) {
            if (alphabet[(static_cast<int>(text[j]) - 97)] == 1) {
                j = 0;
                break;
            }
            if (choiceText != text[j]) {
                alphabet[(static_cast<int>(choiceText) - 97)] = 1;
                choiceText = text[j];
            }
        }

        if (j > 0) {
            count++;
        }
        for (int k = 0; k < 26; k++) {
            alphabet[k] = 0;
        }
    }
    std::cout << count;

    return 0;
}