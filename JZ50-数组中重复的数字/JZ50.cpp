#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int duplicate(vector<int>& numbers) {
        int res = -1;
        unordered_set<int> lib;
        for(int i = 0; i < numbers.size(); i++){
            if(lib.find(numbers[i]) != lib.end()){
                res = numbers[i];
                break;
            }else{
                lib.insert(numbers[i]);
            }
        }
        return res;
    }
};