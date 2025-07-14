#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = 1;
        int start = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, 0));
        for (int i = 0; i < n; i++)
            dp[i][i] = true;
        for (int L = 2; L <= n; L++) {
            for (int i = 0; i < n; i++) {
                int j = L + i - 1;
                if (j >= n) {
                    break;
                }
                if (s[i] != s[j]) {
                    dp[i][j] = false;
                } else {
                    if (j - i <= 2) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = dp[i + 1][j - 1];
                    }
                }
                if (dp[i][j] == true && j-i+1 > maxLen){
                    start = i;
                    maxLen = j-i+1;
                }
            }
        }
        string ans = s.substr(start, maxLen);
        return ans;
    }
};