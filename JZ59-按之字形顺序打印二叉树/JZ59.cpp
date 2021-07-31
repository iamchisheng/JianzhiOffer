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
        if(pRoot != NULL){
            stack<TreeNode*> s1, s2;
            s1.push(pRoot);
            while(!s1.empty() || !s2.empty()){
                vector<int> res1, res2;
                TreeNode* cur = NULL;
                while(!s1.empty()){
                    cur = s1.top();
                    if(cur->left){
                        s2.push(cur->left);
                    }
                    if(cur->right){
                        s2.push(cur->right);
                    }
                    res1.push_back(s1.top()->val);
                    s1.pop();
                }
                if(res1.size()){
                    result.push_back(res1);
                }
                while(!s2.empty()){
                    cur = s2.top();
                    if(cur->right){
                        s1.push(cur->right);
                    }
                    if(cur->left){
                        s1.push(cur->left);
                    }
                    res2.push_back(s2.top()->val);
                    s2.pop();
                }
                if(res2.size()){
                    result.push_back(res2);
                }
            }
        }
        return result;
    }
};