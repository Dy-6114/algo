#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> path;
        auto dfs = [&](auto&&dfs, int i, int t){
            int d = k - path.size();
            if(i < d){
                return;
            }
            if(t < 0 || t > (i+i-d+1)*d/2 ){
                return;
            }
            if(k == path.size()){
                ans.push_back(path);
                return;
            }
            for(int j = i; j>=1; j--){
                path.push_back(j);
                dfs(dfs, j-1, t-j);
                path.pop_back();
            }
        };
        dfs(dfs, 9, n);
        return ans;
    }
};
