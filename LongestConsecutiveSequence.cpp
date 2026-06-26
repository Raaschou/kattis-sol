#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    vector<int> nums {2,20,4,10,3,4,5};
    sort(nums.begin(), nums.end());
    set<int> numsSet {nums.begin(), nums.end()};
    int longestSeq {0};
    int seq {0};

    for (int i {0}; i < nums.size()-1; i++) {
        int d = (numsSet.begin(),i+1);
        int x = (numsSet.begin(),i)+1;
        if (d == x) seq++;
        else seq = 0;
        if (seq > longestSeq) {
            longestSeq = seq;
        }
    }
    std::cout << longestSeq;
    return 0;
}