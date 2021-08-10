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
    string solve(TreeNode *root){
        if(root->left==NULL && root->right==NULL){
            return to_string(root->val);
        }
        if(root->left && root->right){
            return to_string(root->val)+"("+solve(root->left)+")"+"("+solve(root->right)+")";
        }
        if(root->left){
            return to_string(root->val)+"("+solve(root->left) +")";
        }
        if(root->right){
            return to_string(root->val)+"()("+solve(root->right) +")";
        }
        return "";
    }
    string tree2str(TreeNode* root) {
        return solve(root);
    }
};