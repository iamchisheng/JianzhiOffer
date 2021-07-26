#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot) {
        return judgeSame(pRoot, pRoot); 
    }
    bool judgeSame(TreeNode* p1, TreeNode* p2){
        if(p1 == NULL && p2 == NULL){
            return true;
        }
        if(p1 == NULL || p2 == NULL){
            return false;
        }
        if(p1->val == p2->val){
            return judgeSame(p1->left, p2->right) &&
                judgeSame(p1->right, p2->left);
        }
        return false;
    }
    

};