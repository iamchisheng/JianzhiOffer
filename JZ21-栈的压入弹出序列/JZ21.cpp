#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.size() == 0 || popV.size() == 0){
            return false;
        }
        stack<int> seq;
        int j = 0;
        for(int i = 0; i < pushV.size(); i++){
            seq.push(pushV[i]);
            while(!seq.empty() && seq.top() == popV[j]){
                seq.pop();
                j++;
            }
        }
        return seq.empty();
    }
};