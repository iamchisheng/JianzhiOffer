#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> FindNumsAppearOnce(vector<int>& array) {
        vector<int> res;
        if(array.empty()){
            return res;
        }
        map<int, int> mp;
        for(int i = 0; i < array.size(); i++){
            mp[array[i]]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second == 1){
                res.push_back(it->first);
            }
        }
        return res;
    }
};
//使用unordered_map输出的数据顺序是反的