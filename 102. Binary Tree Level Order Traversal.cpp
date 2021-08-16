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
    vector<vector<int>> levelOrder(TreeNode* A) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(A==NULL){return ans;}
        q.push(A);
        int n; 
        while(!q.empty()){
            n = q.size();
            vector<int> k;
            for(int i=0;i<n;i++){
                TreeNode *t = q.front();
                q.pop();
                k.push_back(t->val);
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
            }
            ans.push_back(k);
        }
        return ans;
    }
};