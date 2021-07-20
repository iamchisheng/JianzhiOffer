#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {
    }
};
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode* fakeHead = new ListNode(-1);
        ListNode* cur = fakeHead;
        while(pHead1 != NULL && pHead2 != NULL){
            if(pHead1->val <= pHead2->val){
                cur->next = pHead1;
                pHead1 = pHead1->next;
            }else{
                cur->next = pHead2;
                pHead2 = pHead2->next;
            }
            cur->next = pHead1 ? pHead1 : pHead2;
            return fakeHead->next;
        }
    }
};