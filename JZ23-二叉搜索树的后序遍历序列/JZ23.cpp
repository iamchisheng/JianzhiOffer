#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty()){
            return false;
        }
        if(sequence.size() == 1){
            return true;
        }
        int root = sequence.back();
        int i = 0, j = 0;
        for(i = 0; i <sequence.size() - 1; i++){
            if(sequence[i] > root){
                break;
            }
        }
        for(j = i; j < sequence.size() - 1; j++){
            if(sequence[j] < root){
                return false;
            }
        }
        vector<int> left_seq, right_seq;
        bool left_flag = true, right_flag = true;
        for(int index = 0; index < i; index++){
            left_seq.push_back(sequence[index]);
        }
        for(int index = i; index < sequence.size() - 1; index++){
            right_seq.push_back(sequence[index]);
        }
        if(!left_seq.empty()){
            left_flag = VerifySquenceOfBST(left_seq);
        }
        if(!right_seq.empty()){
            right_flag = VerifySquenceOfBST(right_seq);
        }
        return (left_flag && right_flag);

    }
};