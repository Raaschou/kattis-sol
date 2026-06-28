#include <iostream>
#include <stack>
#include <vector>

class MinStack {
public:

    std::stack<int> stack {};
    std::stack<int> minStack {};
    MinStack() {

    }

    void push(int val) {
        if (minStack.empty()) {
            minStack.push(val);
        } else if (val < minStack.top() || val == minStack.top()) {
            minStack.push(val);
        }
        stack.push(val);
    }

    void pop() {
        if (stack.top() == minStack.top()) minStack.pop();
        if (!stack.empty()) stack.pop();

    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return minStack.top();
    }
};


int main() {

    MinStack minStack = MinStack();
    minStack.push(-2);
    minStack.push(-2);
    minStack.push(-3);
    minStack.push(-3);

    std::cout << minStack.getMin() << std::endl; // return 0
    minStack.pop();
    //std::cout << minStack.top() << std::endl;;    // return 2
    std::cout << minStack.getMin() << std::endl; // return 1


    return 0;
}