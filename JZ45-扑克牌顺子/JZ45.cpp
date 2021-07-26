#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.empty()){
            return false;
        }
        set<int> st;
        int max_value = 0, min_value = 14;
        for(int val : numbers){
            if(val > 0){
                if(st.count(val) > 0){
                    return false;
                }
                st.insert(val);
                max_value = max(max_value, val);
                min_value = min(min_value, val);
            }
        }
        if(max_value - min_value < 5){
            return true;
        }else{
            return false;
        }
    }
};