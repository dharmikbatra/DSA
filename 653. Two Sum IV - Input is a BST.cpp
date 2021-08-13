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
    vector<int> ans;    
    void order(TreeNode *a){
        if(a==NULL){return;}
        order(a->left);
        ans.push_back(a->val);
        order(a->right);
        return;
    }
    bool findTarget(TreeNode* root, int B) {
    ans.clear();
    order(root);
    int j,k,i;
    for(i=0,j=ans.size()-1;i<ans.size()&&j>=0&&i<=j;){
        k = ans[i]+ans[j];
        if(k==B &&i!=j){return 1;}
        if(k<B){i++;}
        else{j--;}
    }
    return 0;
    }
};