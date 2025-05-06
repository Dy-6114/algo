#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int minimumSum(int n, int k) {
            if (n == 1) {
                return 1;
            }
            int sum = 0;
            vector<int> kavoiding;
            kavoiding.push_back(1);
            int num = 2;
            int flag = 0;
            for (int i = 0; i < n - 1; ++i) {
                for (int j = kavoiding.size() - 1; j >= 0; j--) {
                    if ((num + kavoiding[j]) == k) {
                        num ++;
                    }
                }
                kavoiding.push_back(num);
                num++;
            }
            sum = accumulate(kavoiding.begin(), kavoiding.end(), 0);
            return sum;
        }
    };