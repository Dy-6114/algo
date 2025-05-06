#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int countPrefixes(vector<string>& words, string s) {
            int num = 0;
            for(int i = 0; i < s.size(); i++){
                string a = s.substr(0,i+1);
                for(int j = 0; j < words.size(); j++){
                    num += a == words[j] ? 1 : 0;
                }
            }
            return num;
        }
    };