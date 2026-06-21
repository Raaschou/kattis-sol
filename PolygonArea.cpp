#include <iomanip>
#include <iostream>
#include <vector>

using Points = std::vector<std::pair<int,int>>;

double shoelace(const Points& points, int n) {
    double area {0};
    for (int i = 0; i < n; i++) {
        int xi {points[i].first};
        int xiPlusOne {points[(i+1) % n].first};
        int yi {points[i].second};
        int yiPlusOne {points[(i+1) % n].second};

        area += (xi*yiPlusOne) - (yi*xiPlusOne);
    }

    return (1.0/2.0) * area;
}


int PolygonArea() {
    int n {};
    while (std::cin >> n) {
        if (n == 0) {
            return 0;
        }

        Points points;

        for (int i {0}; i < n; i++) {
            int x, y;
            std::cin >> x >> y;
            points.push_back(std::make_pair(x,y));
        }
        double sl {shoelace(points, n)};
        std::string direction {(sl < 0) ? "CW" : "CCW"};
        // Dumb cout manipulation to make exact print for test cases
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << direction << " " << std::abs(sl) << std::endl;
    }
}