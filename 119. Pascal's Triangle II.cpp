class Solution {
public:
     vector<int> fxn(vector<int> &x){
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<x.size()-1;i++){
            ans.push_back(x[i]+x[i+1]);
        }
        ans.push_back(1);
        return ans;
    }
    vector<int> getRow(int n) {
       // if(n==0){return {};}
        if(n==0){return {1};}
        vector<int> prev = {1,1};
        if(n==1){return prev;}
        vector<int> ans;
        for(int i=2;i<=n;i++){
            ans = fxn(prev);
            prev = ans;
        }
        return ans;
    }
};