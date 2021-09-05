class Solution {
public:
    bool solve(vector<int> &lp, string &s){
        int i;
        vector<int> req(26,0);
        for(i=0;i<s.length();i++){
            req[s[i]-97]++;
        }
        for(i=0;i<26;i++){
            if(lp[i]>req[i]){return false;}
        }
        return true;
        
    }
    string shortestCompletingWord(string giv, vector<string>& words) {
        vector<int> lp(26,0);
        transform(giv.begin(),giv.end(),giv.begin(),::tolower);
        for(int i=0;i<giv.size();i++){
            if(giv[i]>=97 && giv[i]<=122){
                lp[giv[i]-97]++;
            }
        }
        string ans;
        int min = INT_MAX;
        for(int i=0;i<words.size();i++){
            if(solve(lp,words[i])){
                if(min>words[i].length()){
                    min = words[i].length();
                    ans = words[i];
                }
            }
        }
        return ans;
        
    }
};