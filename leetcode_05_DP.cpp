#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string longestPalindrome(string s) {
            // python version
            // n = len(s)
            // dp = [[False] * n for _ in range(n)]
            // maxLen = 1
            // begin = 0
            // for i in range(n):
            //     dp[i][i] = True
            // for L in range(2,n+1):
            //     for i in range(n):
            //         j = L - 1 + i
            //         if j >= n:
            //             break
            //         if s[i] != s[j]:
            //             dp[i][j] = False
            //         else:
            //             if j - i < 3:
            //                 dp[i][j] = True
            //             else:
            //                 dp[i][j] = dp[i+1][j-1]
            //         if dp[i][j] and j - i + 1 > maxLen:
            //             maxLen = j - i + 1
            //             begin = i
            // return s[begin:begin+maxLen]
    }
};