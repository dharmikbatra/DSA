/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> req;
    void fxn(TreeNode *root){
        if(root==NULL){return;}
        fxn(root->left);
        fxn(root->right);
        req.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        req.clear();
        fxn(root);
        return req;
    }
};