#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
    vector<int> nums {2,20,4,10,3,4,5};
    //sort(nums.begin(), nums.end());
    set<int> numSet {nums.begin(), nums.end()};

    int longestSeq {0};

    for (int num : numSet) {
        if (numSet.find(num-1) == numSet.end()) {
            int seq {1};
            while (numSet.find(num + seq) != numSet.end()) {
                seq++;
            }
            if (seq > longestSeq) longestSeq = seq;
        }

    }


    std::cout << longestSeq;
    return 0;
}