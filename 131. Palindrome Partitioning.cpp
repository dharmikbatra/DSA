#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<string>> ans;
    bool isPalin(string &s, int i, int j){
        int itri = i, itrj = j;
        while(itri<itrj){
            if(s[itri]!=s[itrj]){return false;}
            itri++;
            itrj--;
        }
        return true;
    }
    void solve(string &s, int i, vector<string> &temp){
        if(i>=s.length()){
            ans.push_back(temp);
            return;
        }
        if((s.length()-i) == 1){
            string req = "";
            req += s[i];
            temp.push_back(req);
            solve(s,i+1,temp);
            temp.pop_back();
            return;
        }
        for(int itr = i;itr<s.length();itr++){
            if(isPalin(s,i,itr)){
                temp.push_back(s.substr(i,itr-i+1));
                solve(s,itr+1,temp);
                temp.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        solve(s,0,temp);
        // if(x){return ans;}
        return ans;
    }
};