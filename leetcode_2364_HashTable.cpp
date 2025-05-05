#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            unordered_map<int, int> mp{0};
            int n = nums.size();
            long long res = 1ll * n * (n-1) / 2;
            for(int i = 0; i < n; i++){
                res -= mp[nums[i] - i]++;
            }
            return res;
        }
    };