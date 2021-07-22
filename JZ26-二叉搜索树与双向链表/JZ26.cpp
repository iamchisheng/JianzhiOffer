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
    TreeNode*Convert(TreeNode* pRootOfTree) {
        if(pRootOfTree == NULL){
            return NULL;
        }
        TreeNode* list_last = NULL;
        ConvertNode(pRootOfTree, list_last);
        while(list_last->left != NULL){
            list_last = list_last->left;
        }
        return list_last;
       }
    void ConvertNode(TreeNode* cur, TreeNode* &list_last){
        if(cur == NULL){
            return;
        }
        if(cur->left != NULL){
            ConvertNode(cur->left, list_last);
        }
        cur->left = list_last;
        if(list_last != NULL){
            list_last->right = cur;
        }
        list_last = cur;
        if(cur->right != NULL){
            ConvertNode(cur->right, list_last);
        }
        return;
    }
};