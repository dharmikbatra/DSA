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
    set<int> s;
    void solve(TreeNode *root){
        if(root==NULL){return;}
        solve(root->left);
        s.insert(root->val);
        
        
        solve(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
       s.clear();
        solve(root);
        auto itr=s.begin();
        
        itr++;
        if(itr==s.end()){return -1;}
        return *itr;
        
    }
};