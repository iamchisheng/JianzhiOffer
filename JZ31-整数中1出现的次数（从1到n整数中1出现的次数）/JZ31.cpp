#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n) {
        int count=0;
         if(n < 1){
             return 0;
         }
         if(n == 1){
             return 1;
         }
         for(int i = 1 ; i <= n ; i *= 10){
             int high = n / (i * 10);
             int low = n % i;
             int cur = (n / i) % 10;
             if(cur == 0){
                count += high * i;
             }else if(cur == 1){
                count += high * i + low + 1;
             }else{
                count += (high + 1) * i;
             }
         }
        return count;
    }
};