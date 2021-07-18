#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent == 0){
            return 0;
        }
        if(exponent == 1){
            return base;
        }
        if(base < 0.00001 && base > -0.00001 && exponent < 0){
            return 0;
        }
        double res = Power(base, exponent >> 1);
        res *= res;
        if(exponent & 0x01 == 1){
            res *= base;
        }
        return res;
    }
};