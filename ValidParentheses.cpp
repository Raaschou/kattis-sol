#include <string>
#include <stack>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if (s.length() < 2) return false;
        stack<char> parStack {};
        for (char c : s) {
            if (c == '(' || c == '{' ||c == '[') {
                parStack.push(c);
            } else if (!parStack.empty()) {
                if (parStack.top() - c > 3 || parStack.top() - c < -3) {
                    return false;
                }
                parStack.pop();
            } else {
                return false;
            }
        }
        if (parStack.empty()) return true;
        return false;
    }
};