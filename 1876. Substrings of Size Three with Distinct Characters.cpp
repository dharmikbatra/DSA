class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,n=s.length();
        int k = n-2,ans=0;        
        for(i=0;i<k;i++){
            if(s[i]==s[i+1]){continue;}
            else if(s[i+1]==s[i+2]){continue;}
            else if(s[i]==s[i+2]){continue;}
            else {ans++;}
        }
        return ans;        
    }
};