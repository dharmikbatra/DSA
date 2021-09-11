class Solution {
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
        mp[0]={4,6};
        mp[1]={6,8};
        mp[2]={7,9};
        mp[3]={8,4};
        mp[4]={0,3,9};
        mp[5]={};
        mp[6]={1,7,0};
        mp[7]={2,6};
        mp[8]={1,3};
        mp[9]={2,4};
    }
    map<int,vector<int> > mp;
    int dp[10][5001];
    int solve(int i,int &n){
        if(n==1){return 1;}
        else{
            if(dp[i][n]!=-1){return dp[i][n];}
            long int ans=0;
            n--;
            for(int j=0;j<mp[i].size();j++){
                ans += solve(mp[i][j],n);
                ans = ans%1000000007;
            }
            n++;
            return dp[i][n]= (int)ans;
        }
        
    }
    int knightDialer(int n) {
        int ans = 0;
        for(int i=0;i<10;i++){
            ans += solve(i,n);
            ans = ans%1000000007;
        }
        return ans;
    }
};