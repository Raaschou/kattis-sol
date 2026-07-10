#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> ans {};
bool checkNums(vector<int> elem) {
    int count {0};
    for (auto answer : ans) {
        for (int j : answer) {
            for (int i {0}; i < 3; i++) {
                if (elem[i] == answer[i]) count++;
            }
        }
    }
    return count >= 3;
}

int main() {

    vector<int> nums {0,0,0,0};
    vector<vector<int>> expec {{-1,-1,2},
        {-1,0,1}};


    int low = 0;
    int high = 2;

    while (low < high - 1) {
        for (int middle {low+1}; high < nums.size(); middle++){
            if (nums[low] + nums[middle] + nums[high] == 0 && !checkNums(vector<int>{nums[low], nums[middle], nums[high]})){
                ans.push_back({nums[low],nums[middle],nums[high]});
            }
            high++;
        }
        low++;

    }



    cout << endl << "Actual: " << endl;

    for (auto& an : ans) {
        cout << "[";
        for (int i : an) {
            cout << i << ",";
        }
        cout << "]" << endl;
    }

    cout << endl << "Expected: " << endl;
    for (auto& an : expec) {
        cout << "[";
        for (int i : an) {
            cout << i << ",";
        }
        cout << "]" << endl;
    }
    return 0;
}