class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& g , int i,int j){
        if(i==g.size()-1 && j==g[0].size()-1){return g[i][j];}
        if(dp[i][j]!=-1){return dp[i][j];}
        if(i==(g.size()-1)){
            return dp[i][j] = g[i][j] + solve(g,i,j+1);
        }
        if(j==(g[0].size()-1)){
            return dp[i][j] = g[i][j]+solve(g,i+1,j);
        }
        return dp[i][j] = g[i][j] + min(solve(g,i+1,j),solve(g,i,j+1));
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0);
    }
};