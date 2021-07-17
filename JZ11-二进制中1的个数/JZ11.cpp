#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int  NumberOf1(int n) {
         int count = 0;
         int base = 1;
         while(base){
             if(n & base){
                 count++;
             }
             base = base << 1;
         }
         return count;
     }
};