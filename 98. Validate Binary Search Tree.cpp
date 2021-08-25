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
    void findmin(TreeNode *root, int &value){
        if(root==NULL){return;}
        if(root->val<value){value = root->val;}
        findmin(root->left,value);
        findmin(root->right,value);
        return;
    }
    void findmax(TreeNode *root, int &value){
        if(root==NULL){return;}
        if(root->val > value){value = root->val;}
        findmax(root->left,value);
        findmax(root->right,value);
        return;
    }
    
    bool isValidBST(TreeNode* root) {
        if(root==NULL){return true;}
        if(root->left==NULL && root->right==NULL){return true;}
        int min = INT_MAX;
        int max = INT_MIN;
        if(root->left==NULL){
             findmin(root->right,min);
            if(min>root->val){return isValidBST(root->right);}
            else{return false;}
        }
        else if(root->right==NULL){
             findmax(root->left,max);
            if(max < root->val){return isValidBST(root->left);}
            else{return false;}
        }else{
            findmax(root->left,max);
            findmin(root->right,min);
            if(max < root->val && min > root->val){return isValidBST(root->left) && isValidBST(root->right);}
            else{return false;}
        }
        
        
       
       
        
        
        
    }
};