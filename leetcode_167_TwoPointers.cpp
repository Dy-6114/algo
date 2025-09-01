#include"bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i=0, j= numbers.size() - 1;
        while(true){
            if(numbers[i] + numbers[j] > target){
                j--;
            }
            if(numbers[i] + numbers[j] < target){
                i++;
            }
            if(numbers[i] + numbers[j] == target){
                break;
            }
        }
        ans.push_back(i + 1);
        ans.push_back(j + 1);
        return ans;
    }
};