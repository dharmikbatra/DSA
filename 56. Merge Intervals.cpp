bool comp(vector<int> &a,vector<int> &b){
        return a[0]<b[0];
    }
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),comp);
        vector<vector<int>> ans;
        if(in.size()==0){return in;}
        ans.push_back(in[0]);
        int k=0;
        for(int i=1;i<in.size();i++){
            if(in[i][0]>ans[k][1]){k++;ans.push_back(in[i]);}
            else{
                ans[k][1] = max(ans[k][1],in[i][1]);
            }
        }
        return ans;
        
    }
};