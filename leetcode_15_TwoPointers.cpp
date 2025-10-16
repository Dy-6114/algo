#include"bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int first = 0; first < nums.size(); ++first) {
            if(first > 0 && nums[first] == nums[first-1]) continue;
            int l = first + 1, r = nums.size() - 1;
            while (l < r) {
                if (nums[l] + nums[r] + nums[first] == 0) {
                    ans.push_back({nums[first], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1])
                        l++;
                    while (l < r && nums[r] == nums[r + 1])
                        r--;
                } else if (nums[l] + nums[r] < -nums[first]) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return ans;
    }
};