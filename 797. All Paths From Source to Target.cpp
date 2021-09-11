class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &k,vector<vector<int>>& g, int i){
        if(i==(g.size()-1)){
            k.push_back(i);
            ans.push_back(k);
             k.pop_back();
            return;
        }
        k.push_back(i);
        for(auto x:g[i]){
            solve(k,g,x);
        }
        k.pop_back();
        return;        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        ans.clear();
        vector<int> k;
        solve(k,graph,0);
        return ans;
    }
};