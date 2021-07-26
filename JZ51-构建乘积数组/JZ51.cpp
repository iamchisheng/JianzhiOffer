#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> B(A.size(), 1);
        for(int i = 1; i < A.size(); i++){
            B[i] = B[i - 1] * A[i - 1];
        }
        int temp = 1;
        for(int j = A.size() - 2; j >= 0; --j){
            temp *= A[j + 1];
            B[j] *= temp;
        }
        return B;
    }
};