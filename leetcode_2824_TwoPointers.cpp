#include"bits/stdc++.h"
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int i = 0, j = nums.size() - 1;
        while(i < j){
            if(nums[i] + nums[j] >= target){
                j--;
            }else{
                ans += j - i;
                i++;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {-1,1,2,3,1};
    Solution s;
    cout << s.countPairs(nums,2);
    return 0;
}