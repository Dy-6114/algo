#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for (char c:s) {
            if (!st.empty()) {
                if (c == ')' and st.top() == '(') {
                        st.pop();
                        continue;
                }
                if (c == ']' and st.top() == '[') {
                        st.pop();
                        continue;
                }
                if (c == '}' and st.top() == '{') {
                        st.pop();
                        continue;
                }
            }
            st.push(c);
        }
        return st.empty();
    }
};