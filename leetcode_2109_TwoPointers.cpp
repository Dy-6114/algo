#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string addSpaces(string s, vector<int>& spaces) {
            // sort(spaces.begin(),spaces.end());
            // reverse(spaces.begin(),spaces.end());
            // for(auto pos : spaces){
            //     s.insert(pos," ");
            // }
            // return s;
            string ans;
            int n = s.size();
            int m = spaces.size();
            for (int i = 0, ptr = 0; i < n; i++) {
                if (ptr < m && i == spaces[ptr]) {
                    ans.push_back(' ');
                    ptr++;
                }
                ans.push_back(s[i]);
            }
            return ans;
        }
    };