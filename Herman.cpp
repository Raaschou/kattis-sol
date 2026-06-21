#include <numbers>
#include <iostream>



int Herman() {
    double pi {std::numbers::pi};
    int radius {};
    std::cin >> radius;
    std::cout << pi * radius << std::endl;
    double radiusSquared {static_cast<double>(radius * radius)};
    std::cout << (radiusSquared * 2);
    return 0;
}