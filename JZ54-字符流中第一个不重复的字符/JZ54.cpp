#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    queue<char> q;
    unordered_map<char, int> mp;
    //Insert one char from stringstream
    void Insert(char ch) {
         if(mp.find(ch) == mp.end()){
             q.push(ch);
         }
        ++mp[ch];
    }
    //return the first appearence once char in current stringstream
    char FirstAppearingOnce() {
        while(!q.empty()){
            char ch = q.front();
            if(mp[ch] == 1){
                return ch;
            }else{
                q.pop();
            }
        }
        return '#';
    }

};