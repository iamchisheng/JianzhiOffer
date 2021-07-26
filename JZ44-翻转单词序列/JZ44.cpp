#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string ReverseSentence(string str) {
        reverse(str.begin(), str.end());
        int left = 0, right = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' '){
                right = i;
                reverse(str.begin() + left, str.begin() + right);
                left = right + 1;
            }
        }
        reverse(str.begin() + left, str.end());
        return str;
    }
};