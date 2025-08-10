#include<bits/stdc++.h>
using namespace std;

// https://leetcode.cn/problems/generate-parentheses/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string path = "";
        int m = 2 * n;
        auto dfs = [&](auto&& dfs, int i, int num){
            if (i == m){
                ans.push_back(path);
                return;
            }
            if (num < n){
                path += '(';
                dfs(dfs, i+1, num+1);
                path = path.substr(0,i);
            }
            if (i-num<num){
                path += ')';
                dfs(dfs,i+1,num);
            }   
        };
        dfs(dfs,0,0);
        return ans;
    }
};