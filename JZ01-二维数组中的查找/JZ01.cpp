#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.empty() || array[0].size() == 0){
            return false;
        }
        int row_max = array.size();
        int col_max = array[0].size();
        int row = 0;
        int col = col_max - 1;
        while (row < row_max && col >= 0)
        {
            if(array[row][col] == target){
                return true;
            }
            else if(array[row][col] > target){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};