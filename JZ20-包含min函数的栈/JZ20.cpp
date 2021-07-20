#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    stack<int> data, help;
    void push(int value) {
        data.push(value);
        if(help.empty()){
            help.push(value);
        }
        else{
            if(value <= help.top()){
                help.push(value);
            }
            else{
                help.push(help.top());
            }
        }
    }
    void pop() {
        data.pop();
        help.pop();
    }
    int top() {
        return data.top();
    }
    int min() {
        return help.top();
    }
};