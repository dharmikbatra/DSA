class Solution {
public:
    int dp[101][2][2];
    int solve(vector<int> &nm, int i, int prev, int &st){
        if(i==nm.size()){return 0;}
        if(dp[i][prev][st]!=-1){return dp[i][prev][st];}
        if(i==nm.size()-1){
            if(st){
                return 0;
            }else{
                if(prev==1){
                    return dp[i][prev][st] = solve(nm,i+1,0,st);
                }else{
                    return dp[i][prev][st] = max(nm[i]+solve(nm,i+1,1,st),solve(nm,i+1,0,st));
                }
            }
        }  
        if(i==0){
            if(st){
                return dp[i][prev][st] = nm[i] + solve(nm,i+1,1,st);
            }else{
                return dp[i][prev][st]=solve(nm,i+1,0,st);
            }
        }
        if(prev==1){
            return dp[i][prev][st] = solve(nm,i+1,0,st);
        }else{
            return dp[i][prev][st] = max(nm[i]+solve(nm,i+1,1,st),solve(nm,i+1,0,st));
        }
    }
    int rob(vector<int>& nm) {
        memset(dp,-1,sizeof(dp));
        int st = 1;
        int k1 = solve(nm,0,0,st);
        st=0;
        memset(dp,-1,sizeof(dp));
        int k2 = solve(nm,0,0,st);
        return max(k1,k2);
    }
};