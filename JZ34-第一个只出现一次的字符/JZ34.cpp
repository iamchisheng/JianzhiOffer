#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<char, int> mp;
        for(const char ch : str){
            mp[ch] += 1;
        }
        for(int i = 0; i < str.size(); i++){
            if(mp[str[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};