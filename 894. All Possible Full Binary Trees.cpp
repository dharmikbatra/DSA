class Solution {
public:
    TreeNode *y = new TreeNode(0);
    map<int,vector<TreeNode*>> req;
    vector<TreeNode*> solve(int n){
        if(n%2==0){return {};}
        if(n==1){return {y};}
        vector<TreeNode*> ans;
        auto itr = req.find(n);
        if(itr!=req.end()){return itr->second;}
        for(int i=1;i<n-1;i++){
            vector<TreeNode*> left = solve(i);
            vector<TreeNode*> right = solve(n-1-i);
            for(int j=0;j<left.size();j++){
                for(int k=0;k<right.size();k++){
                    TreeNode *parent = new TreeNode(0);
                    parent->left = left[j];
                    parent->right = right[k];
                    ans.push_back(parent);
                }
            }
        }
        return req[n]=ans;
    }
    
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans = solve(n);
        return ans;
        
    }
};