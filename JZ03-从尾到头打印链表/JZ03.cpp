#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* cur = head;
        ListNode* temp;
        while(cur){
            temp = cur->next;
            cur->next = pre;
            
            pre = cur;
            cur = temp;
        }
        vector<int> res;
        while(pre){
            res.push_back(pre->val);
            pre = pre->next;
        }
        return res;
    }
};