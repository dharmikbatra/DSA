class Solution {
public:
    void dfs(vector<vector<int>> &adj, int node, int &end , vector<int> &vis){
        if(vis[node]==1){return;}
        if(vis[end]==1){return ;}
        vis[node]=1;
        for(auto x:adj[node]){
            dfs(adj,x,end,vis);
        }
        return ;
    }
    bool validPath(int n, vector<vector<int>>& ed, int st, int end) {
        vector<vector<int>> adj(n+1);
        vector<int> vis(n+1,0);
        for(int i=0;i<ed.size();i++){
            adj[ed[i][0]].push_back(ed[i][1]);
            adj[ed[i][1]].push_back(ed[i][0]);
        }
        dfs(adj,st,end,vis);
        if(vis[end]!=0){return true;}
        return false;
    }
};