#include <iostream>
#include <vector>

int main() {
    std::string s {"Madam, in Eden, I'm Adam"};
    std::cout << s << std::endl;
    // Strip string for everything but alphanumerical chars
    for (int i {0}; i < s.length(); i++) {
        if ((s[i] <= 64 && s[i] >= 58) || (s[i] < 47)) {
            s.erase(i,1);
            i--;
        }
    }

    std::cout << s << std::endl;

    if (s == "") return 10;
    int sLen {static_cast<int>(s.length())};


    int j {sLen-1};
    for (int i {0}; i <= sLen / 2; i++) {
        if (tolower(s[i]) != tolower(s[j])) return -1;
        j--;
    }
    return 0;
}