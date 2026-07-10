
#include <vector>


int main() {
    std::vector<int> heights {1,7,2,5,4,7,3,6}; // should be 36
    int area {0};

    for (int l {0}; l < heights.size(); l++) {
        int temp {0};
        int r {static_cast<int>(heights.size() - 1)};
        while (l < r){
            if (heights[l] >= heights[r]) {
                temp = heights[r] * (r - l);
            } else {
                temp = heights[l] * (r - l);
            }
            if (temp > area) area = temp;
            r--;
        }
    }

    return area;
}