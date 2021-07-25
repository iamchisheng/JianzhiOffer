#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    const int kmod = 1000000007;
public:
    int InversePairs(vector<int> data) {
        int res = 0;
        vector<int> temp(data.size());
        MergeSort(data, temp, 0, data.size() - 1, res);
        return res;
    }
    void MergeSort(vector<int>& arr, vector<int>& temp, int l, int r, int &res){
        if(l >= r){
            return;
        }
        int mid = l + (r - l) / 2;
        MergeSort(arr, temp, l, mid, res);
        MergeSort(arr, temp, mid + 1, r, res);
        Merge(arr, temp, l, mid, r, res);
        return;
    }
    void Merge(vector<int>& arr, vector<int>& temp, int l, int mid, int r, int& res){
        int i = l, j = mid + 1, k = 0;
        while(i <= mid && j <= r){
            if(arr[i] > arr[j]){
                temp[k++] = arr[j++];
                res += (mid - i + 1);
                res %= kmod;
            }else{
                temp[k++] = arr[i++];
            }
        }
        while(i <= mid){
            temp[k++] = arr[i++];
        }
        while(j <= r){
            temp[k++] = arr[j++];
        }
        for(k = 0, i = l; i <= r; i++, k++){
            arr[i] = temp[k];
        }
        return;
    }
};