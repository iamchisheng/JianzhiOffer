#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jumpFloorII(int number) {
        if(number == 0 || number == 1) return 1;
        vector<int> dp(number + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= number; i++){
            for(int j = 0; j < i; j++){
                dp[i] += dp[j];
            }
        }
        return dp[number];
    }
};