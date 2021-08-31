class Solution {
public:
    int dp[101][2];
    int solve(vector<int> &nm, int i, int prev){
        if(i==nm.size()){return 0;}
        if(dp[i][prev]!=-1){return dp[i][prev];}
        if(prev==1){
            return dp[i][prev] = solve(nm,i+1,0);
        }else{
            return dp[i][prev] = max(nm[i]+solve(nm,i+1,1),solve(nm,i+1,0));
        }
    }
    int rob(vector<int>& nm) {
        memset(dp,-1,sizeof(dp));
        return solve(nm,0,0);
    }
};