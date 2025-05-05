#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int i,j;
            int n = prices.size();
            int res = 0;
            for (i = 0; i < n; i++){
                j = i + 1;
                if(j < n && prices[j] > prices[i]){
                    res += prices[j] - prices[i];
                }
            }
            return res;
        }
    };