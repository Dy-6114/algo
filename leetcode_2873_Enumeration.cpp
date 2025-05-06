#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size();
            long long res = 0;
            for (int k = 2; k < n; k++){
                int m = nums[0];
                for (int j = 1; j < k; j++){
                    res = max(res, (long long)(m - nums[j]) * nums[k]);
                    m = max(m, nums[j]);
                }
            }
            return res;
        }
    };