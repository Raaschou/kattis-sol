#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <vector>

using Grid = std::vector<std::vector<char>>;

void bfs(const Grid& grid, const char root) {
    std::queue<char> queue {};
    queue.push(root);
    std::set<char> set {};

    while (!queue.empty()) {
        char current {queue.front()};
        queue.pop();


    }
}

int main() {
    Grid grid {
            {'q','w','e','r','t','y','u','i','o','p'},
            {'a','s','d','f','g','h','j','k','l'},
            {'z','x','c','v','b','n','m'},
        };

    int numCases {};
    std::cin >> numCases;
    while (numCases--) {
        std::string str{};
        int numSpellings;
        std::cin >> str >> numSpellings;
        std::pair<int, std::string> loc{};
        while (numSpellings--) {

        }



    }


    for (const std::vector<char>& node : grid) {
        int n {static_cast<int>(node.capacity())};
        for (int i {0}; i < n+10; i++) {
            if (node[i] >= 'a' && node[i] <= 'z')

                std::cout << node[i] <<  " ";
            else
                std::cout << "NULL";
        }
        std::cout << std::endl;
    }

    return 0;
}