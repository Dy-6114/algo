#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        int n = s.length();
        auto dfs = [&](auto&&dfs,int i){
            if (i == n){
                ans.push_back(path);
                return;
            }
            for(int j = i; j < n; j++){
                string str = "\0";
                str = s.substr(i,j+1-i);
                string rev = str;
                reverse(rev.begin(),rev.end());
                if (str == rev){
                    path.push_back(str);
                    dfs(dfs,j+1);
                    path.pop_back();
                }
            }
        };
        dfs(dfs,0);
        return ans;
    }
};