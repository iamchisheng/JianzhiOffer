#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int res = array[0];
        for(int i = 1; i < array.size(); i++){
            if(array[i - 1] > 0){
                array[i] += array[i - 1];
            }
            res = max(res, array[i]);
        }
        return res;
    }
};