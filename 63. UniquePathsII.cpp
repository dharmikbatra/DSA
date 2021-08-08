class Solution {
public:
    int dp[102][102];
    int solve(vector<vector<int>>& og , int i,int j){
        if(i==(og.size()-1) && j==(og[0].size()-1) && og[i][j]==0){return 1;}
        int k1=0,k2=0;
        if(dp[i][j]!=-1){return dp[i][j];}
        if(i<(og.size()-1) && og[i+1][j]==0 && og[i][j]==0){
            k1 = solve(og,i+1,j);
        }
        if(j<(og[0].size()-1) && og[i][j+1]==0 && og[i][j]==0){
            k2 = solve(og,i,j+1);
        }
        return dp[i][j]=k1 + k2;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        memset(dp,-1,sizeof(dp));
        return solve(og,0,0);
    }
};
