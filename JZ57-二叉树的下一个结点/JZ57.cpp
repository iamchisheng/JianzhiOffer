#include <bits/stdc++.h>
using namespace std;
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode) {
        if(pNode == NULL) return NULL;
        //[2 3 6]
        TreeLinkNode* pRight = pNode->right;
        if(pRight){
            while(pRight->left){
                pRight = pRight->left;
            }
            return pRight;
        }
        //[1 4 5]
        TreeLinkNode* current = pNode;
        TreeLinkNode* parent = pNode->next;
        while(parent){
            if(parent->left == current){
                return parent;
            }
            current = parent;
            parent = parent->next;
        }
        return NULL;
    }
};