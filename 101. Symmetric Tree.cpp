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
    int ispalin(vector<int> &a){
        if(a.size()%2==1){return 0;}
        int i,j=a.size()-1;
        for(i=0;i<a.size()/2;i++,j--){
            if(a[i]!=a[j]){return 0;}
        }
        return 1;
    }
    int levelorder(TreeNode *r){
        queue<TreeNode*> q;
        q.push(r);
        TreeNode *p;
        while(!q.empty()){
            vector<int> vec;
            int n = q.size();
            for(int i=0;i<n;i++){
                p = q.front();
                q.pop();
                if(p->left){
                    vec.push_back(p->left->val);
                    q.push(p->left);
                }else{
                    vec.push_back(INT_MIN);
                }
                if(p->right){
                    vec.push_back(p->right->val);
                    q.push(p->right);
                }else{
                    vec.push_back(INT_MIN);
                }                
            }
            if(ispalin(vec)){continue;}
            else{return 0;}            
        }
        return 1;
    }
    
   
    bool isSymmetric(TreeNode* root) {
        return levelorder(root)?true:false;
        
    }
};