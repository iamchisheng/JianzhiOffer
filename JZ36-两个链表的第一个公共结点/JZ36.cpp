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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        ListNode* pa = pHead1;
        ListNode* pb = pHead2;
        while(pa != pb){
            if(pa != NULL){
                pa = pa->next;
            }else{
                pa = pHead2;
            }
            if(pb != NULL){
                pb = pb->next;
            }else{
                pb = pHead1;
            }
        }
            return pa;
    }
};
/*
A: [4, 1, 8, 4, 5]
B: [5, 0, 1, 8, 4, 5]
初始化：ta = 4 tb = 5
1 ta = 1 tb = 0
2 ta = 8 tb = 1
3 ta = 4 tb = 8
4 ta = 5 tb = 4
5 ta = null tb = 5
6 ta = 5 tb = null 
7 ta = 0 tb = 4
8 ta = 1 tb = 1
9 ta = 8 tb = 8 
10 ta === tb 退出循环*/