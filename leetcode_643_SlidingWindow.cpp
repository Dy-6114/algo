#include"bits/stdc++.h"
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ans;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if (i - k + 1 < 0)
                continue;
            if(i == k-1) ans = sum;
            ans = max(ans,sum);
            sum -= nums[i-k+1];
        }
        return (double)ans / k;
    }
};