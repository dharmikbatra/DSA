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
unordered_map<int,int> m;
int postIndex;
class Solution {
public:
   
    TreeNode* solve(vector<int> &post, vector<int> &in, int begin, int end){
        if(begin>end){return NULL;}
        
        int inIndex = m[post[postIndex]];
        TreeNode *t = new TreeNode(in[inIndex]);
        postIndex--;
        t->right = solve(post,in,inIndex+1,end);
         t->left = solve(post,in,begin,inIndex-1);
        return t;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n = in.size();
        m.clear();
        postIndex = n-1;
        for(int i=0;i<n;i++){
            m[in[i]]=i;
        }
        return solve(post,in,0,n-1);
    }
};