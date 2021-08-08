class Solution {
public:
    int k,min;
    void solve(TreeNode *root){
        if(root==NULL){return;}
        solve(root->left);
        if(root->val-k < min){min=root->val-k;}
        k = root->val;
        solve(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        min=INT_MAX;
        k=-100000;
        solve(root);
        return min;
    }
};