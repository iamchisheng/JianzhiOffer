#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int StrToInt(string str) {
        const int len = str.length();
        if (len == 0){
            return 0;
        }
        int i = 0;
        while (i < len && str[i] == ' '){
            ++i;
        }
        if (i == len){
            return 0;
        }
        if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-'){
            return 0;
        }
        bool neg = str[i]=='-' ? true : false;
        i = isdigit(str[i]) ? i : i+1;
        long long ans = 0L;

        while (i < len && isdigit(str[i])) {
            ans = ans * 10 + (str[i++]-'0');
            if (!neg && ans > INT_MAX) {
                ans = INT_MAX;
                break;
            }
            if (neg && ans > 1L + INT_MAX) {
                ans = 1L + INT_MAX;
                break;
            }
        }
        if (i != len){
            return 0;
        }
        return !neg ? static_cast<int>(ans) : static_cast<int>(-ans);
    }
};