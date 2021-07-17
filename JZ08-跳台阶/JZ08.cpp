#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jumpFloor(int number) {
        if(number <= 0) return 0;
        if(number == 1 || number == 2) return number;
        int x = 1, y = 2, res;
        for(int i = 2; i < number; i++){
            res = x + y;
            x = y;
            y = res;
        }
        return res;        
    }
};
