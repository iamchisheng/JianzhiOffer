#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if(numbers.empty()) return 0;
        int pre = numbers[0];
        int count = 1;
        for(int i = 1; i < numbers.size(); i++){
            if(numbers[i] == pre){
                count++;
            }
            else{
                count--;
                if(count == 0){
                    pre = numbers[i];
                    count = 1;
                }
            }
        }
        int num = 0;
        for(int i = 0; i < numbers.size(); i++){
            if(numbers[i] == pre){
                num++;
            }
        }
        if(num > numbers.size() / 2){
            return pre;
        }
        else{
            return 0;
        }
    }
};