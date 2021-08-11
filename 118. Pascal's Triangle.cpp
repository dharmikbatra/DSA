class Solution {
public:
    vector<int> fxn(vector<int> x){
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<x.size()-1;i++){
            ans.push_back(x[i]+x[i+1]);
        }
        ans.push_back(1);
        return ans;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        if(n==0){return ans;}
        ans.push_back({1});
        if(n==1){return ans;}
        for(int i=2;i<=n;i++){
            vector<int> k = fxn(ans[i-2]);
            ans.push_back(k);
        }
        return ans;
    }
};