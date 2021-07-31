#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int cutRope(int number) {
        if(number <= 4){
            return number;
        }
        vector<int> dp(number + 1, -1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        dp[4] = 4;
        for(int i = 5; i <= number; i++){
            for(int j = 1; j <= i; j++){
                if(dp[i - j] * j > dp[i]){
                    dp[i] = dp[i - j] * j;
                }
            }
        }
        return dp[number];
    }
};