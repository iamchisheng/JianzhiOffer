#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> Permutation(string str) {
        perm(str, 0);
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
    void perm(string& str, int k){
        if(k == str.size() - 1){
            res.push_back(str);
        }else{
            for(int i = k; i < str.size() - 1; i++){
                swap(str[k], str[i]);
                perm(str, k + 1);
                swap(str[k], str[i]);
            }
        }
    }
private:
    vector<string> res;
};