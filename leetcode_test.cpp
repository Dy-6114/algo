
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        int binary_sort(const vector<int>& nums, int l, int r, int target){
            int mid;
            while(l < r){
                mid = l + (r - l) / 2;
                if(nums[mid] < target){
                    l = mid + 1;
                }else{
                    r = mid;
                }
            }
            return l;
        }
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            int n = nums.size();
            int i;
            long long res = 0;
            sort(nums.begin(),nums.end());
            for (i = 0; i < n - 1; i++) {
                int min = binary_sort(nums,i+1,n,lower-nums[i]);
                int max = binary_sort(nums,i+1,n,upper-nums[i]+1);
                res += max-min;
            }
            return res;
        }
    };

int main(){
    vector<int> nums = {0,1,7,4,4,5};
    Solution s;
    cout << s.countFairPairs(nums, 3, 6);
    return 0;
}