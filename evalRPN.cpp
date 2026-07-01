#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
int main() {
    vector<string> tokens {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    int res {0};
    stack<int> numStack {};
    for (auto token : tokens) {
        if (atoi(token.c_str()) || atoi(token.c_str()) <= 0 && (token != "+" &&  token != "-" && token != "/" && token != "*")) {
            numStack.push(atoi(token.c_str()));
        } else {
            int right {numStack.top()};
            numStack.pop();
            int left = numStack.top();
            numStack.pop();
            if (token == "+") numStack.push(left + right);
            if (token == "-") numStack.push(left - right);
            if (token == "/") numStack.push(left / right);
            if (token == "*") numStack.push(left * right);

        }
    }
    std::cout << numStack.top();
    return 0;
}