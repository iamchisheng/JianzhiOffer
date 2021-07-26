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
    ListNode* deleteDuplication(ListNode* pHead) {
        if(pHead == NULL || pHead->next == NULL){
            return pHead;
        }
        ListNode* dummy = new ListNode(-1);
        dummy->next = pHead;
        ListNode* pre = dummy;
        ListNode* cur = pHead;
        while(cur){
            if(cur->next && cur->val == cur->next->val){
                cur = cur->next;
                while(cur->next && cur->val == cur->next->val){
                    cur = cur->next;
                }
                cur = cur->next;
                pre->next = cur;
            }else{
                pre = cur;
                cur = cur->next;
            }
        }
        ListNode* res = dummy->next;
        delete dummy;
        return res;
    }
};