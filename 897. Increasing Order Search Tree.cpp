class Solution {
public:
    vector<int> vec;
    void inorder(TreeNode *root){
        if(root==NULL){return;}
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vec.clear();
        inorder(root);
        TreeNode *curr,*ans;
        curr = ans = new TreeNode(vec[0]);
        for(int i=1;i<vec.size();i++){
            curr->right = new TreeNode(vec[i]);
            curr = curr->right;
        }
        return ans;
    }
};