#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Fibonacci(int n) {
        int x = 0, y = 1, res = 0;
        for(int i = 2; i <= n; i++){
            res = x + y;
            x = y;
            y = res;
        }
        return res;
    }
};
