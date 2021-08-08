class Solution {
public:
    int k;
    void trav(TreeNode *root,int &l,int &h){
        if(root==NULL){return;}
        trav(root->left,l,h);
        if(root->val>=l && root->val<=h){k+=root->val;}
        trav(root->right,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        k=0;
        trav(root,low,high);
        return k;
    }
};