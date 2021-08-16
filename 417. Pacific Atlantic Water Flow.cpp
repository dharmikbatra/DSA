class Solution {
public:
    void dfs(vector<vector<int>> &a,int i,int j,vector<vector<int>> &vis){
        if(i<0 || j<0 || i>=a.size() || j>=a[0].size()){return ;}
        if(vis[i][j]==1){return ;}
        vis[i][j]=1;
        if(i-1>=0 && a[i-1][j]>=a[i][j] && vis[i-1][j]==0){
            dfs(a,i-1,j,vis);
        }
        if(j-1>=0 && a[i][j-1]>=a[i][j] && vis[i][j-1]==0){
            dfs(a,i,j-1,vis);
        }
        if(i+1<a.size() && a[i+1][j]>=a[i][j] && vis[i+1][j]==0){
            dfs(a,i+1,j,vis);
        }
        if(j+1<a[0].size() && a[i][j+1]>=a[i][j] && vis[i][j+1]==0){
            dfs(a,i,j+1,vis);
        }
        return;
    
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& a) {
        if(a.size()==0){return {{}};}
        int i,j;
        vector<vector<int>> ans;
        vector<vector<int>> pac(a.size(),vector<int>(a[0].size(),0));
        vector<vector<int>> atl(a.size(),vector<int>(a[0].size(),0));
        for(i=0;i<a.size();i++){
            dfs(a,i,0,pac);
        }
        for(i=0;i<a[0].size();i++){
            dfs(a,0,i,pac);
        }
        for(i=0;i<a.size();i++){
            dfs(a,i,a[0].size()-1,atl);
        }
        for(i=0;i<a[0].size();i++){
            dfs(a,a.size()-1,i,atl);
        }
        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
                if(atl[i][j]==pac[i][j] && pac[i][j]==1){
                    vector<int> k = {i,j};
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};