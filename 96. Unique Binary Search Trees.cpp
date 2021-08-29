class Solution {
public:
    int dp[20];
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    int solve(int n){
        if(n==0){return 1;}
        if(n==1){return 1;}
        int ans = 0;
        if(dp[n]!=-1){return dp[n];}
        for(int i=0;i<n;i++){
            ans += numTrees(i)*numTrees(n-i-1);
        }
        return dp[n] = ans;
    }
    int numTrees(int n) {
        return solve(n);
    }
};