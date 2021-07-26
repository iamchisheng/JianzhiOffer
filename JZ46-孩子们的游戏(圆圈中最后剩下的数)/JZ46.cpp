#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int func(int n, int m){
        if(n == 1){
            return 0;
        }
        return (func(n - 1, m) + m) % n;
    }
    int LastRemaining_Solution(int n, int m) {
        if(n <= 0){
            return -1;
        }
        return func(n, m);
    }
};