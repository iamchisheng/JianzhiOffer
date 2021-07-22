#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(input.empty() || k <= 0 || k > input.size()){
            return res;
        }
        sort(input.begin(), input.end());
        return vector<int>({input.begin(), input.begin()+k});
    }
};