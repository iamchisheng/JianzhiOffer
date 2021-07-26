#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool match(string str, string pattern) {
        return re_match(str, pattern, 0, 0);
    }
    
    bool re_match(string &str, string &pattern, int i, int j)
    {
        if(i == str.size() && j == pattern.size())
            return true;
        if(j + 1 < pattern.size() && pattern[j + 1] == '*')
            return re_match(str, pattern, i, j + 2) || (i != str.size()) && ((str[i] == pattern[j] || pattern[j] == '.') && re_match(str, pattern, ++i, j));
        else
            return (i != str.size()) && j != pattern.size() && (str[i] == pattern[j] || pattern[j] == '.') && re_match(str, pattern, ++i, ++j);
    }
};