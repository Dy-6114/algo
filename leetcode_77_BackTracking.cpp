#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> path;
        auto dfs = [&](auto&&dfs, int i){
            
            if (path.size() == k){
                ans.push_back(path);
                return;
            }
            if (i == n+1){
                return; 
            }
            for(int j = i; j <= n; j++){
                path.push_back(j);
                dfs(dfs, j+1);
                path.pop_back();
            }
        };
        dfs(dfs,1);
        return ans;
    }
};