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
        vector<vector<int> > Print(TreeNode* pRoot) {
            vector<vector<int> > result;
            if(pRoot == NULL){
                return result;
            }
            queue<TreeNode*> que;
            que.push(pRoot);
            while(!que.empty()){
                int len = que.size();
                vector<int> level;
                for(int i = 0; i < len; i++){
                    TreeNode* node = que.front();
                    que.pop();
                    level.push_back(node->val);
                    if(node->left){
                        que.push(node->left);
                    }
                    if(node->right){
                        que.push(node->right);
                    }
                }
                result.push_back(level);
            }
            return result;
        }
    
};