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
    bool hasPathSum(TreeNode* root, int ts) {
        if(root==NULL){return false;}
        
        if(root->val==ts && root->left==NULL && root->right==NULL){return true;}
        return hasPathSum(root->left,ts-root->val) || hasPathSum(root->right,ts-root->val);
    }
};