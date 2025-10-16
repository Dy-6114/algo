#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int res = INT_MAX;
        int ans;
        sort(nums.begin(), nums.end());
        res = abs(target - (nums[0] + nums[1] + nums[2]));
        ans = nums[0] + nums[1] + nums[2];
        int l;
        int r;
        for (int first = 0; first < nums.size() - 2; first++)
        {
            l = first + 1;
            r = nums.size() - 1;
            while (l < r)
            {
                
                if(nums[first] + nums[l] + nums[r] == target){
                    return target;
                }
                if (nums[first] + nums[l] + nums[r] > target)
                {
                    if(nums[first] + nums[l] + nums[r]-target < res){
                        res = nums[first] + nums[l] + nums[r]-target;
                        ans = nums[first] + nums[l] + nums[r];
                    }
                    r--;
                }
                else
                {
                    if(target-nums[first] - nums[l] - nums[r] < res){
                        res = target-nums[first] - nums[l] - nums[r];
                        ans = nums[first] + nums[l] + nums[r];
                    }
                    l++;
                }
            }
        }
        return ans;
    }
};