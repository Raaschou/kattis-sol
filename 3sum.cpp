#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    vector<int> nums {1,2,-2,-1};
    vector<vector<int>> expec {{-1,-1,2},
        {-1,0,1}};
    vector<vector<int>> ans {};




    sort(nums.begin(), nums.end());

    for (int low {0}; low < nums.size(); low++) {
        if (nums[low] > 0) break;
        if (low > 0 && nums[low] == nums[low - 1]) continue;
        int left {low + 1};
        int right = nums.size()-1;
        while (left < right){
            int sum = nums[low] + nums[left] + nums[right];
            if (sum < 0) {
                left++;
            } else if (sum > 0) {
                right--;
            } else {
                ans.push_back({nums[low], nums[left], nums[right]});
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) left++;

            }
        }
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