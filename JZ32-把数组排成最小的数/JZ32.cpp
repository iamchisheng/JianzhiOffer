#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool cmp(int a, int b){
        string x = to_string(a) + to_string(b);
        string y = to_string(b) + to_string(a);
        return x < y;
    }
    string PrintMinNumber(vector<int> numbers) {
        string res = "";
        sort(numbers.begin(), numbers.end(), cmp);
        for(int i = 0; i < numbers.size(); i++){
            res += to_string(numbers[i]);
        }
        return res;
    }
};