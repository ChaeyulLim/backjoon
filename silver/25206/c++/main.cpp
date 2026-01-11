#include <iostream>
#include <string>
#include <cstdio>

int main()
{

    float creditVector[8] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0}; // F학점 제외
    float totalScore = 0.0, credit;
    
    float sumScore = 0.0, sumCredit = 0.0;

    int index;
    std::string score;

    for (int i = 0 ; i < 20; i++) {
        std::string text;
        std::cin >> text >> credit >> score;
        if (score == "P") { continue; }
        if (score == "F") { sumCredit += credit; continue; }
        index = ((static_cast<int>(score[0]) - 65) * 2);
        index += score[1] == '+' ? 0 : 1;
        sumScore += creditVector[index] * credit;
        sumCredit += credit;
    }

    printf("%.6f", (sumScore / sumCredit));

    return 0;
}