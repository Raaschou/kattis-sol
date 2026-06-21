#include <iostream>

int ABC() {
    int x,y,z, A,B,C;

    std::cin >> x >> y >> z;
    std::string order;
    std::getline(std::cin >> std::ws, order);

    if (x > y && x > z) {
        C = x;
    } else if (y > x && y > z) {
        C = y;
    } else if (z > y && z > x) {
        C = z;
    }


    if ((x > y && x < z) || (x < y && x > z)) {
        B = x;
    } else if ((y > x && y < z) || (y < x && y > z)) {
        B = y;
    } else if ((z > y && z < x )|| (z < y && z > x)) {
        B = z;
    }

    if (x < y && x < z) {
        A = x;
    } else if (y < x && y < z) {
        A = y;
    } else if (z < y && z < x) {
        A = z;
    }

    for (char a : order) {
        if (a == 'A') {
            std::cout << A << " ";
        }
        if (a == 'B') {
            std::cout << B << " ";
        }
        if (a == 'C') {
            std::cout << C << " ";
        }
    }
   }