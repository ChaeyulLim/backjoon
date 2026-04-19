#include <iostream>
#include <string>


int main()
{
    std::string t0, t1, answer = "", temp;
    std::cin >> t0 >> t1;
    int n0, n1, index = 0;
    if (t0.size() < t1.size()) {
        temp = t0;
        t0 = t1;
        t1 = temp;
    }
    n0 = t0.size() -1;
    n1 = t1.size() -1;
    int carry = 0, sum;
    while (n0 > -1) {
        if (n1 >= 0) {
            sum = (t0[n0] - '0') + (t1[n1] - '0') + carry;
            carry = sum / 2;
        } else if (n0 >= 0){
            sum = (t0[n0] - '0') + carry;
            carry = sum / 2;
        }
        
        answer += ('0' + (sum % 2));
        n0--;
        n1--;
    }
    if (carry) {
        answer += '1';
    }
    int i = answer.size() - 1;
    while (i > 0 && answer[i] == 0) {
        i--;
    }
    for (int i = answer.size() -1; i >= 0; i--) {
        std::cout << answer[i];
    }

    return 0;
}