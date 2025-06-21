#include<bits/stdc++.h>
using namespace std;

class Solution {
    const string dial[10] =
        { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if (n == 0){
            return {};
        }
        vector<string> ans;
        string path(n, '\0');
        auto dfs = [&](auto&& dfs, int i) {
            if (i == n) {
                ans.emplace_back(path);
                return;
            }
            for (char c : dial[digits[i] - '0']) {
                path[i] = c;
                dfs(dfs, i + 1);
            }
        };
        dfs(dfs, 0);
        return ans;
    }
};

// auto dfs = [&](auto&& dfs, int i){}; 递归lambda函数写法
// [&] 捕获外部变量
// auto&& 万能引用，既能接左值（已有 lambda），又能接右值（临时创建的 lambda）