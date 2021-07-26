#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > res;
        if(sum == 0){
            return res;
        }
        int left  = 1, right = 2;
        while(left < right){
            if((left + right) * (right - left + 1) / 2 == sum){
                vector<int> temp;
                for(int i = left; i <= right; i++){
                    temp.push_back(i);
                }
                res.push_back(temp);
                right++;
            }else if((left + right) * (right - left + 1) / 2 > sum){
                left++;
            }else{
                right++;
            }
        }
        return res;
    }
};