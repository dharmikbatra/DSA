class Solution {
public:
    int solve(vector<int> &p, int ind, int stillhave,vector<vector<int>> &dp){
        if(ind>=p.size() || stillhave<=0){return 0;}
        // auto itr = mp.find({ind,stillhave});
        // if(itr!=mp.end()){return itr->second;}
        if(dp[ind][stillhave]!=-1){return dp[ind][stillhave];}

        if(stillhave%2==0){
            return dp[ind][stillhave] = max({-p[ind]+solve(p,ind+1,stillhave-1,dp),solve(p,ind+1,stillhave,dp)});
        }else{
            return dp[ind][stillhave] = max({p[ind]+solve(p,ind+1,stillhave-1,dp),solve(p,ind+1,stillhave,dp)});
        }

    }
    int maxProfit(int k, vector<int>& price) {
        vector<vector<int>> dp(price.size()+1,vector<int>(2*k +1,-1));
        int ans = solve(price,0,2*k,dp);
        return ans;
    }
};