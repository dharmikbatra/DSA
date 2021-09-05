class Solution {
public:
    int dp[301][5001];
    int solve(vector<int> &c, int am,int i){
        if(i<0){return 0;}
        if(am==0){return 1;}
        if(dp[i][am]!=-1){return dp[i][am];}
        if(c[i]<=am){
            return dp[i][am] = solve(c,am-c[i],i)+solve(c,am,i-1);
        }else{
            return dp[i][am] = solve(c,am,i-1);
        }
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return solve(coins,amount,coins.size()-1);
    }
};