#include"bits/stdc++.h"
using namespace std;

class Solution {
private:
    bool isValid(const string& s){
        int cnt = 0;
        for(char ch : s){
            if(ch == '('){
                cnt++;
            } 
            if(ch == ')'){
                cnt--;
                if(cnt < 0){
                    return false;
                }
            }
        }
        return cnt == 0;
    }

public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        int lremove = 0 ,rremove = 0;

        for(char ch : s){
            if(ch == '(') lremove++;
            if(ch == ')'){
                if(lremove == 0){
                    rremove++;
                }else{
                    lremove--;
                }
            }
        }

        auto dfs = [&](auto&&dfs, int i, int l, int r, string str){
            if(l == 0 && r == 0){
                if(isValid(str))
                    ans.push_back(str);
                return;
            }
            if(str.size() < l+r){
                return;
            }
            for(int j = i; j < str.size(); ++j){
                if (j != i && str[j] == str[j - 1]) {
                    continue;
                }
                if(l && str[j] == '('){
                    dfs(dfs, j, l - 1, r, str.substr(0, j)+ str.substr(j+1));
                }
                if(r && str[j] == ')'){
                    dfs(dfs, j, l, r - 1, str.substr(0, j)+ str.substr(j+1));
                }
            }
        };
        dfs(dfs, 0, lremove, rremove, s);
        return ans;
    }
    
};

int main(){
    Solution S;
    vector<string> ans;
    ans = S.removeInvalidParentheses("(a)())()");
    for(auto& s : ans){
        cout << s << endl;
    }
    return 0;
}
