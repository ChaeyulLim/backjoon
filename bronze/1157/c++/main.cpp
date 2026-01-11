#include <iostream>
#include <string>

int main()
{
    int spelling[26];
    std::string text;
    std::cin >> text;

    for (int i = 0; i < 26; i++) {
        spelling[i] = 0; // spelling counting Clear
    }

    for (int i = 0; i < text.size(); i++) {
        if (text[i] > 96) { // 소문자
            spelling[text[i] - 97]++;
        } else { // 대문자
            spelling[text[i] - 65]++;
        }
    }
    
    int maxSpelling = 0;
    int index = 0;
    bool isOverlap = false;
    for (int i = 0; i < 26; i++) {
        
        if (spelling[i] > maxSpelling) {
            isOverlap = false;
            maxSpelling = spelling[i];
            index = i;
        } else if (spelling[i] == maxSpelling) {
            isOverlap = true;
        }
    }
    
    std::cout << (isOverlap ? '?' : static_cast<const char>(index + 65));

    return 0;
}