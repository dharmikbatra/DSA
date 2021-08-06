class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &nums, vector<int> &v, int k, int ind){
        if(k==0){
            ans.push_back(v);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            v.push_back(nums[i]);
            solve(ans,nums,v,k-1,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int> v;
        solve(ans,nums,v,k,0);
        return ans;
    }
};