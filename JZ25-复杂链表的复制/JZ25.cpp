#include <bits/stdc++.h>
using namespace std;
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        if(pHead == NULL){
            return pHead;
        }
        RandomListNode* p = pHead;
        RandomListNode* dummy = new RandomListNode(-1);
        RandomListNode* q = dummy;
        map<int, RandomListNode*> dic;
        while(p != NULL){
            RandomListNode* r = new RandomListNode(p->label);
            dic[p->label] = r;
            q->next = r;
            q = r;
            p = p->next;
        }
        p = pHead;
        q = dummy->next;
        while(p != NULL){
            if(p->random != NULL){
                q->random = dic[p->random->label];
            }
            p = p->next;
            q = q->next;
        }
        return dummy->next;
    }
};