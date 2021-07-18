#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> reOrderArray(vector<int>& array) {
        if (array.empty()){
            return array;
        }
        int index = 0;
        vector<int> res(array.size(), 0);
        for(int i = 0; i < array.size(); i++){
            if(array[i] % 2 == 1){
                res[index] = array[i];
                index++;
            }
        }
        for(int i = 0; i < array.size(); i++){
            if(array[i] % 2 == 0){
                res[index] = array[i];
                index++;
            }
        }
        return res;
    }
};