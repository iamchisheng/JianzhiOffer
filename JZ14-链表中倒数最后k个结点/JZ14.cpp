#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        if(pHead == NULL || k == 0){
            return NULL;
        }
        ListNode* pFront = pHead;
        ListNode* pBehind = pHead; 
        for(int i = 0; i < k; i++){
            if(pFront){
                pFront = pFront->next;
            }
            else{
                return NULL;
            }
        }
        while(pFront){
            pFront = pFront->next;
            pBehind = pBehind->next;
        }
        return pBehind;
    }
};