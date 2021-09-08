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
    bool isCompleteTree(TreeNode* root) {
      queue<TreeNode*> q;
        if(root==NULL){return true;}
        q.push(root);
        TreeNode *temp;
        int flag = 0;
        while(!q.empty() ){
            temp = q.front();
            q.pop();
            if(temp==NULL){
                flag=1;
            }else{
                if(flag){return false;}
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        return true;
    }
};