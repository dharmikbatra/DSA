class Solution {
public:
    int dp[1001][1001];
    int lcs(string &s1, string &s2, int i1, int i2){
        if(i1<0 || i2<0){return 0;}
        if(dp[i1][i2]!=-1){return dp[i1][i2];}
        if(s2[i2]==s1[i1]){
            return dp[i1][i2] = 1+lcs(s1,s2,i1-1,i2-1);
        }else{
            return dp[i1][i2] = max(lcs(s1,s2,i1-1,i2),lcs(s1,s2,i1,i2-1));
        }
    }
    int longestPalindromeSubseq(string s) {
        string s2 = s;
        memset(dp,-1,sizeof(dp));
        reverse(s2.begin(),s2.end());
        return lcs(s,s2,s2.size()-1,s.size()-1);
    }
};