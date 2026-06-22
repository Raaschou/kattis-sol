#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <vector>

std::vector<std::string> grid { "qwertyuiop",
                                "asdfghjkl",
                                "zxcvbnm"};

int bfs(const char root, const char goal) {
    std::queue<char> queue {};
    std::vector<char> explored {};
    queue.push(root);
    std::set<char> set {};

    while (!queue.empty()) {
        char current {queue.front()};
        queue.pop();


    }
    return 0;
}

int main() {


    int numCases {};
    std::cin >> numCases;
    while (numCases--) {
        std::string str{};
        int numSpellings;
        std::cin >> str >> numSpellings;
        std::pair<int, std::string> loc{};
        while (numSpellings--) {
            std::string typed;
            std::cin >> typed;
            int dist {0};

            for (int i {0}; i < str.length(); i++) {
                dist += bfs(str[i], typed[i]);
            }
        }



    }


    for (const std::vector<char>& node : grid) {
        int n {static_cast<int>(node.capacity())};
        for (int i {0}; i < n; i++) {
            if (node[i] >= 'a' && node[i] <= 'z')

                std::cout << node[i] <<  " ";
            else
                std::cout << "NULL";
        }
        std::cout << std::endl;
    }

    return 0;
}