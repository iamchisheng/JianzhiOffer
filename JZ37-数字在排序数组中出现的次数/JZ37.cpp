#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int begin = begin_num(data, k);
        int end = end_num(data, k);
        if(begin != -1 && end != -1){
            return end - begin + 1;
        }
        return 0;
    }
    int begin_num(vector<int> data, int k){
        int begin = 0, end = data.size() - 1;
        while(begin <= end){
            int mid = begin + (end - begin) / 2;
            if(data[mid] < k){
                begin = mid + 1;
            }else if(data[mid] > k){
                end = mid - 1;
            }else if(mid - 1 >= 0 && data[mid - 1] == k){
                end = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
    int end_num(vector<int>data, int k){
        int begin = 0, end = data.size() - 1;
        while(begin <= end){
            int mid = begin + (end - begin) / 2;
            if(data[mid] < k){
                begin = mid + 1;
            }else if(data[mid] > k){
                end = mid - 1;
            }else if(mid + 1 < data.size() && data[mid + 1] == k){
                begin = mid + 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};