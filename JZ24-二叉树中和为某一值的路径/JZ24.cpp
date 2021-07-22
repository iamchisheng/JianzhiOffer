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
    void dfs(TreeNode* root, int sum, vector<int>& path, vector<vector<int> >& ret){
        path.push_back(root->val);
        if(sum == root->val && !root->left && !root->right){
            ret.push_back(path);
        }
        if(root->left){
            dfs(root->left, sum - root->val, path, ret);
        }
        if(root->right){
            dfs(root->right, sum - root->val, path, ret);
        }
        path.pop_back();
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int> > res;
        vector<int> path;
        if(!root){
            return res;
        }
        dfs(root, expectNumber, path, res);
        return res;

    }
};