#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

std::vector<std::string> grid { "qwertyuiop", "asdfghjkl","zxcvbnm"};


int bfs(const char root, const char goal) {
    std::queue<std::tuple<int,int, int>>queue {};
    std::vector<std::string> explored {grid}; // blank explored letters using -

    for (int i {0}; i < 3; i++) {
        for (int j {0}; j < grid[i].size(); j++){
            if (grid[i][j] == root) {
                queue.push({i, j, 0});
                explored[i][j] = '-';

                while (!queue.empty()) {

                    auto& [x,y, step] {queue.front()};
                    queue.pop();

                    if (grid[x][y] == goal) return step;

                    std::vector<std::pair<int,int>> neighbours {{x+1,y}, {x-1,y}, {x,y+1}, {x,y-1}};
                    for (auto& [row, col] : neighbours) {
                        if (row >= 0 && row < 3 && col >= 0 && col < grid[row].size() && explored[row][col] != '-') {
                            queue.push({row, col, step+1});
                            explored[row][col] = '-';
                        }
                    }
                }
            }
        }
    }

    return -1;
}

int main() {

    int numCases {};
        std::cin >> numCases;

    while (numCases--) {
        std::string str{};
        int numSpellings;
        std::vector<std::pair<int, std::string>> output {};

        std::cin >> str >> numSpellings;

        while (numSpellings--) {
            std::string typed;
            std::cin >> typed;
            int dist {0};

            for (int i {0}; i < str.length(); i++) {
                if (str[i] != typed[i]) {
                    dist += bfs(str[i], typed[i]);
                }
            }
            output.push_back({dist,typed});

        }
        std::sort(output.begin(), output.end());
        for (auto&[typed, dist] : output) std::cout << typed << " " << dist << std::endl;
    }
    return 0;
}