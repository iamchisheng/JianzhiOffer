#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> res;
        if(array.empty()){
            return res;
        }
        int left = 0;
        int right = array.size() - 1;
        while(left < right){
            int two_sum = array[left] + array[right];
            if(two_sum == sum){
                res.push_back(array[left]);
                res.push_back(array[right]);
                return res;
            }else if(two_sum > sum){
                right--;
            }else{
                left++;
            }
        }
        return res;
    }
};
