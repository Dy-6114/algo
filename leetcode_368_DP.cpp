#include<bits/stdc++.h>
using namespace std;


//内存超时,暴力解法
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     vector<vector<int>> res;
//     int n;
//     void dfs(vector<int> set, int idx, int n, const vector<int> &nums)
//     {
//         if (idx == n)
//         {
//             if (!set.empty())
//                 res.push_back(set);
//             return;
//         }
//         dfs(set, idx + 1, n, nums); // 不选当前元素
//         set.push_back(nums[idx]);   // 选当前元素
//         dfs(set, idx + 1, n, nums);
//     }
//     vector<int> largestDivisibleSubset(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         n = nums.size();
//         vector<int> set;
//         dfs(set, 0, n, nums);
//         vector<int> ans;
//         int maxLen = 0;
//         for (auto set : res)
//         {
//             int len = set.size();

//             int i;
//             for (i = 1; i < len; i++)
//             {
//                 if (set[i] % set[i - 1] == 0)
//                 {
//                 }
//                 else
//                     break;
//             }
//             if (i == len && maxLen < len)
//             {
//                 maxLen = len;
//                 ans = set;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
    public:
        vector<int> largestDivisibleSubset(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            vector<int> dp(n, 1), prev(n, -1);
            int maxLen = 0, maxIndex = 0;
    
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < i; ++j) {
                    if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        prev[i] = j;
                    }
                }
                if (dp[i] > maxLen) {
                    maxLen = dp[i];
                    maxIndex = i;
                }
            }
    
            vector<int> res;
            while (maxIndex != -1) {
                res.push_back(nums[maxIndex]);
                maxIndex = prev[maxIndex];
            }
            reverse(res.begin(), res.end());
            return res;
        }
    };
    