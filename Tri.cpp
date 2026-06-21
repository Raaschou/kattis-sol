#include <array>
#include <iostream>
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return a / b;
}

int main() {
    using funcptr = int*(int,int);
    int a,b,c;
    std::cin >> a >> b >> c;
    std::array ops {'+', '-', '*', '/'};
    std::array funcs {add, sub, mul, divi};
    for (int i {0}; i < 4; i++) {

        if ((funcs[i])(a, b) == c) {
            std::cout << a << ops[i] << b << '=' << c << std::endl;
            break;
        }
        if ((funcs[i])(b, c) == a) {
            std::cout << a << '=' << b << ops[i] << c << std::endl;
            break;
        }
    }
}