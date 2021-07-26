#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNum(string& str, bool havePoint){
        if (str.size() == 0){
            return false;
        }
        int pointCount  = 0, pointLimit = 0;
        if (havePoint){
            pointLimit = 1;
        }
        else{
            pointLimit = 0;
        }
        
        int n = str.size();
        int i = 0, j = 0; // i表示字符串首位 j表示过滤掉 + - 后的首位
        // 如果开始没有+- i 和 j 会是一样的 如果有 i 比 j 大 1
        for (auto& c: str){
            if (i == 0 && (c == '+' || c == '-')){
                ++i;
                continue; // 过滤掉首位唯一一次可能出现的 + -
                          // 之后如果还有 + - 则不会过滤
            } else ++i;
            if (j == 0 && c == '0'){
                // 首位为0
                ++j;
                if (str.size() > 1){
                    return false;
                }
                else if (str.size() == 1)return true;
            } else ++j;
            
            if (c == '.'){
                // 不能出现在开始 和 最后
                if (i == 1 || i == n){
                    return false;
                }
                ++pointCount;
                if (pointCount > pointLimit){
                    return false;
                }
            }else if (c < '0' || c > '9'){
                return false;
            }
        }
        // 最开始只有一个 + - 后面什么都没有的情况
        if (i - j == 1 && j == 0){
            return false;
        }
        return true;
    }
    
    bool isNumeric(string str) {
        if (str.size() == 0){
            return false;
        }
        // 以 e 为界一分为二 后面比前面唯一的不同是 后面不能有小数
        string sTemp;
        int eSplit = true;
        for (auto c: str){
            if (c == ' '){
                continue;
            }
            if (eSplit && (c == 'e' || c == 'E')){
                eSplit = false;
                bool res = isNum(sTemp, true);
                if (!res){
                    return false;
                }
                sTemp = "";
            }else{
                sTemp += c;
            }
        }
        return eSplit ? isNum(sTemp, true) : isNum(sTemp, false);
    }
};