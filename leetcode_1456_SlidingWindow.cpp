#include"bits/stdc++.h"
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        int l,r;
        l = r = 0;
        int ans = 0, tmp = 0;
        while(r < s.size() && l <= r){
            int size = r - l + 1;
            if(size < k){
                if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u'){
                    tmp++;
                }
            }
            if(size > k){
                if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u'){
                    tmp--;
                }
                l++;
                r--;
            }
            if(size == k){
                if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u'){
                    tmp++;
                }
                ans = max(ans,tmp);
            }
            r++;
        }
        return ans;
    }
};