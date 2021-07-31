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
    TreeNode* KthNode(TreeNode* pRoot, int k) {
        return InOrder(pRoot, k);
    }
    TreeNode* InOrder(TreeNode* root, int& k){
        if(root == NULL){
            return NULL;
        }
        TreeNode* node = InOrder(root->left, k);
        if(node != NULL){
            return node;
        }
        if(--k == 0){
            return root;
        }
        return InOrder(root->right, k);
    }
};