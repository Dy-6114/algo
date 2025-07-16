#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        int n = nums.size();
        auto dfs = [&](auto&&dfs, int i){
            if (i == n){
                ans.emplace_back(path);
                return;
            }
                
            path.emplace_back(nums[i]);
            dfs(dfs, i+1);
            path.pop_back();
            dfs(dfs, i+1);
        };
        dfs(dfs,0);
        return ans;
    }
};