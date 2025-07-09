#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> free(n+1);
        free[0] = startTime[0];
        free[n] = eventTime - endTime[n-1];
        for (int i = 1; i < n; i++){
            free[i] = startTime[i] - endTime[i - 1];
        }
        int ans,s, front, rear;
        ans = s = front = rear = 0;
        while (front<=rear && rear < n){
            s += free[rear];
            if((rear - front)>k){
                s -= free[front];
                front++;
            }
            ans = max(ans, s);
            rear++;
        }
        return ans;
    }
};