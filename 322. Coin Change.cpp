class Solution {
public:
    int dp[100001][13];
    int solve(vector<int> &c, int am, int i){
        if(i<0){return 1234567;}
        if(dp[am][i]!=-1){return dp[am][i];}
        if(c[i]==am){
            return dp[am][i] = 1;
        }else if(c[i]< am){
            return dp[am][i] = min(1+solve(c,am-c[i],i),solve(c,am,i-1));
        }else{
            return dp[am][i] = solve(c,am,i-1);
        }
    }
    int coinChange(vector<int>& c, int am) {
        if(am==0){return 0;}
        memset(dp,-1,sizeof(dp));
        int k =  solve(c,am,c.size()-1);
        return k==1234567?-1:k;
        
        
    }
};