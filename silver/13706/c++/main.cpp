#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int cmp(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) return a.size() > b.size() ? 1 : -1;
    return a.compare(b);
}

std::string add(const std::string& a, const std::string& b) {
    std::string n1 = a, n2 = b;
    while (n1.size() < n2.size()) n1 = "0" + n1;
    while (n2.size() < n1.size()) n2 = "0" + n2;
    std::string res = "";
    int carry = 0;
    for (int i = n1.size()-1; i >= 0; --i) {
        int sum = (n1[i]-'0') + (n2[i]-'0') + carry;
        carry = sum / 10;
        res.push_back(sum % 10 + '0');
    }
    if (carry) res.push_back(carry + '0');
    std::reverse(res.begin(), res.end());
    return res;
}

std::string sub(const std::string& a, const std::string& b) {
    std::string n1 = a, n2 = b;
    while (n2.size() < n1.size()) n2 = "0" + n2;
    std::string res = "";
    int borrow = 0;
    for (int i = n1.size()-1; i >= 0; --i) {
        int diff = (n1[i]-'0') - (n2[i]-'0') - borrow;
        if (diff < 0) { diff += 10; borrow = 1; }
        else borrow = 0;
        res.push_back(diff + '0');
    }
    std::reverse(res.begin(), res.end());

    size_t start = res.find_first_not_of('0');
    return start == std::string::npos ? "0" : res.substr(start);
}

std::string mul(const std::string& a, const std::string& b) {
    int n = a.size(), m = b.size();
    std::vector<int> res(n + m, 0);
    for (int i = n-1; i >= 0; --i)
        for (int j = m-1; j >= 0; --j)
            res[i+j+1] += (a[i]-'0') * (b[j]-'0');
    for (int i = res.size()-1; i > 0; --i) {
        res[i-1] += res[i] / 10;
        res[i] %= 10;
    }
    std::string r = "";
    bool lead = true;
    for (int d : res) {
        if (lead && d == 0) continue;
        lead = false;
        r.push_back(d + '0');
    }
    return r.empty() ? "0" : r;
}

std::string div2(const std::string& a) {
    std::string res = "";
    int rem = 0;
    for (char c : a) {
        int cur = rem * 10 + (c - '0');
        res.push_back(cur / 2 + '0');
        rem = cur % 2;
    }
    size_t start = res.find_first_not_of('0');
    return start == std::string::npos ? "0" : res.substr(start);
}

int main()
{

    std::string num;
    std::cin >> num;

    std::string min = "1";
    std::string max = div2(num);


    while (cmp(min, max) <= 0) {
        std::string cur = div2(add(min, max));
        int c = cmp(mul(cur, cur), num);
        if (c == 0) {
            std::cout << cur;
            break;
        } else if (c > 0) {
            max = sub(cur, "1");
        } else if (c < 0) {
            min = add(cur, "1");
        }
    }
    return 0;
}