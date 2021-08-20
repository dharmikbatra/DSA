class Solution {
public:
    int flag;
    void dfs(vector<vector<int>> &adj, int ind,int parent, vector<int> &col){
        if(flag){return;}
        col[ind] = !col[parent];
        for(auto x : adj[ind]){
            if(col[x]==-1){
                dfs(adj,x,ind,col);
            }else{
                if(col[x]==(!col[ind])){continue;}
                else{flag=1;return;}
            }
            
        }
    }
    bool isBipartite(vector<vector<int>> &adj) {
        vector<int> col(adj.size(),-1);
        flag=0;
        for(int i=0;i<adj.size();i++){
            if(col[i]==-1){
                col[i]=0;
                dfs(adj,i,i,col);
                if(flag){return false;}
            }
        }
        return true;
    }
};