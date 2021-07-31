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
    char* Serialize(TreeNode *root) {    
        if(root == NULL){
            return "#";
        }
        string res = to_string(root->val);
        res.push_back(',');
        char* left = Serialize(root->left);
        char* right = Serialize(root->right);
        char* ret = new char[strlen(left) + strlen(right) + res.size()];
        strcpy(ret, res.c_str());
        strcat(ret, left);
        strcat(ret, right);
        return ret;
    }
    TreeNode* Deserialize(char *str) {
        return deser(str);
    }
    TreeNode* deser(char *&s){
        if(*s == '#'){
            s++;
            return nullptr;
        }
        int num = 0;
        while(*s != ','){
            num = num * 10 + (*s - '0');
            s++;
        }
        s++;
        TreeNode* root = new TreeNode(num);
        root->left = deser(s);
        root->right = deser(s);
        return root;
    }
};