class Solution {
public:
    void dfs(vector<vector<int>> &adj,int i, vector<int> &vis){
        if(vis[i]==1){return;}
        
        vis[i]=1;
        for(auto x:adj[i]){
            dfs(adj,x,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& ic) {
        vector<vector<int>> adj(ic.size()+1);
        for(int i=0;i<ic.size();i++){
            for(int j=0;j<ic[0].size();j++){
                if(ic[i][j]==1){
                    adj[i+1].push_back(j+1);
                }
            }
        }
        vector<int> vis(ic.size()+1,0);
        int ans=0;
        for(int i=1;i<=ic.size();i++){
            if(vis[i]==0){
                ans++;
                dfs(adj,i,vis);
            }
        }
        return ans;
    }
};