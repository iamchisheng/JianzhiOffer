#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    priority_queue<int, vector<int>, less<int>> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
    void Insert(int num) {
        if((maxheap.size() + minheap.size()) % 2 == 0){
            if(maxheap.size() > 0 && num < maxheap.top()){
                maxheap.push(num);
                num = maxheap.top();
                maxheap.pop();
            }
            minheap.push(num);
        }else{
            if(minheap.size() > 0 && num > minheap.top()){
                minheap.push(num);
                num = minheap.top();
                minheap.pop();
            }
            maxheap.push(num);
        }
    }
    double GetMedian() {
        int size = maxheap.size() + minheap.size();
        if((size % 2) == 1){
            return minheap.top();
        }else{
            return (minheap.top() + maxheap.top()) / 2.0;
        }
    }
};