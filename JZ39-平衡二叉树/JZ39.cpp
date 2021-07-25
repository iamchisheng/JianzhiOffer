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
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot == NULL) return true;
        int left_height = TreeHeight(pRoot->left);
        int right_height = TreeHeight(pRoot->right);
        if(abs(left_height - right_height) > 1){
            return false;
        }else{
            return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
        }
    }
    int TreeHeight(TreeNode* pRoot) {
        if(pRoot == NULL){
            return 0;
        }
        int left_height = TreeHeight(pRoot->left);
        int right_height = TreeHeight(pRoot->right);
        
        return max(left_height, right_height)+1;
    }
};