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
    void fxn(TreeNode *A){
        if(A==NULL){return;}
        if(A->left==NULL){return;}
        TreeNode *temp=A->left,*a=A->left;
        while(a){temp=a;a=a->right;}
        temp->right=A->right;
        A->right=A->left;
        A->left=NULL;
    }
    void flatten(TreeNode* root) {
        if(root==NULL){return;}
        TreeNode *a = root;
        while(a){fxn(a);a=a->right;}
    }
};