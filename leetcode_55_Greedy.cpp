#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int maxPos= nums[0];
            for(int i = 0; i <= maxPos; i++){
                    maxPos = maxPos > i + nums[i] ? maxPos:i+nums[i];
                    if(maxPos + 1 >= nums.size()) return true;
            }
            return false;
        }
    };