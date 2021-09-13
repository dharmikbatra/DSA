class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &c,int i, int target, vector<int> &k){
         if(i>=c.size()){return;}
        if(target==0){
            ans.push_back(k);
            return;
        }
        if(target<0){return;}       
        k.push_back(c[i]);
        solve(c,i,target-c[i],k);
        k.pop_back();
        solve(c,i+1,target,k);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        vector<int> k;
        solve(candidates,0,target,k);
        return ans;
        
    }
};