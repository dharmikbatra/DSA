class Solution {
public:
    int dp[501][501];
    int solve(string &a,string &b,int x,int y){
        if(x==0){return y;}
        if(y==0){return x;}
        if(dp[x][y]!=-1){return dp[x][y];}
        if(a[x-1]==b[y-1]){
            return dp[x][y]=solve(a,b,x-1,y-1); 
        }else{
            return dp[x][y] = 1 + min(solve(a,b,x-1,y),min(solve(a,b,x,y-1),solve(a,b,x-1,y-1)));
        }
    }
    int minDistance(string w1, string w2) {
        memset(dp,-1,sizeof(dp));
        int k = solve(w1,w2,w1.length(),w2.length());
        return k;
    }
};