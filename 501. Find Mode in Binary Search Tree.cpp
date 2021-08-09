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
    map<int,int>mp;
    void fxn(TreeNode *root){
        if(root==NULL){return;}
        fxn(root->left);
        auto itr = mp.find(root->val);
        if(itr==mp.end()){
            mp.insert({root->val,1});
        }else{
            itr->second++;
        }
        fxn(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        mp.clear();
        fxn(root);
        int max = INT_MIN;
        for(auto itr = mp.begin();itr!=mp.end();itr++){
            if(itr->second>max){max = itr->second;}
        }
        vector<int> ans;
        for(auto itr = mp.begin();itr!=mp.end();itr++){
            if(itr->second==max){ans.push_back(itr->first);}
        }
        return ans;
        
    }
};