class Solution {
public:
    int x;
    void fxn(TreeNode *root){
        if(root->left==NULL && root->right==NULL){return;}
        
        if(root->left){            
            if(root->left->left==NULL && root->left->right==NULL){x += root->left->val;}            
            else{fxn(root->left);}
        }
        
        if(root->right)
            fxn(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        x = 0;
        fxn(root);
        return x;
    }
};