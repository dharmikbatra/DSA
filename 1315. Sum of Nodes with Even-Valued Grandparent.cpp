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
    int solve(TreeNode *node){
        int ans=0;
        if(node==NULL || node->val%2){return 0;}
        if(!check(node)){return 0;}
        if(node->left){
            TreeNode *temp = node->left;
            if(temp->left){ans += temp->left->val;}
            if(temp->right){ans += temp->right->val;}
        }
        if(node->right){
            TreeNode *temp = node->right;
            if(temp->left){ans += temp->left->val;}
            if(temp->right){ans += temp->right->val;}
        }
        return ans;
    }
    int ans;
    bool check(TreeNode *node){
        if(node){
            if(node->left==NULL){
                if(node->right==NULL){return false;}
                if(node->right->left==NULL && node->right->right==NULL){return false;}
                return true;
            }
            if(node->right==NULL){
                if(node->left==NULL){return false;}
                if(node->left->left==NULL && node->left->right==NULL){return false;}
                return true;
            }
            if(node->left->left || node->left->right || node->right->left || node->right->right){return true;}
        }
        return false;
    }
    void solu(TreeNode *temp){
        if(temp && (temp->left || temp->right)){
            ans += solve(temp);
            solu(temp->left);
            solu(temp->right);
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        ans = 0;
        solu(root);
        return ans;
    }
};