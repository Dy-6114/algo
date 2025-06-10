//https://leetcode.cn/problems/longest-substring-without-repeating-characters/description/?topicSlugs=array&page=1
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int lengthOfLongestSubstring(string s) {
    //     int m = 0;
    //     int i = 0;
    //     int j = 0;
    //     vector<char> v;
    //     while(i < s.size() && j < s.size()){
    //         if (find(v.begin(),v.end(),s[j]) == v.end()){
    //             v.push_back(s[j]);
    //             j++;
    //             m = max(m,j-i);
    //         }else{
    //             i++;
    //             j = i;
    //             v.clear();
    //         }
    //     }
    //     return m;
    // }
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int i;
        int j;
        j = i = 0;
        int ans = 0;
        while(j < s.size()){
            if(seen.count(s[j]) == 0){
                seen.insert(s[j]);
                j++;
                ans = max(ans, j - i);
            }else{
                seen.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};