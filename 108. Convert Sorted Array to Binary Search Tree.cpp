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
    TreeNode* solve(vector<int>& nm, int i, int j){
        if(i>j){return NULL;}
        if(i==j){
            return new TreeNode(nm[i]);
        }else{
            int mid = (i+j)/2;
            TreeNode* k = new TreeNode(nm[mid]);
            k->left = solve(nm,i,mid-1);
            k->right = solve(nm,mid+1,j);
            return k;
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};