#include <bits/stdc++.h>
class Solution {
public:
    void rem(unordered_map<string,int> &mp, string key){
        auto itr = mp.find(key);
        if(itr->second==1){
            mp.erase(key);
        }else{
            itr->second--;
        }
    }
    int longestPalindrome(vector<string>& w) {
        int ans=0;
        string s;
        unordered_map<string,int> mp;
        for(int i=0;i<w.size();i++){
            if(w[i][0]==w[i][1]){
                mp[w[i]]++;
                continue;
            }
            auto itr = mp.find(w[i]);
            if(itr==mp.end()){
                s = w[i][1];
                s = s + w[i][0];
                auto itr2 = mp.find(s);
                if(itr2==mp.end()){
                    mp.insert({w[i],1});
                }else{
                    s = w[i][1];
                    s = s + w[i][0];
                    ans += 4;
                    rem(mp,s);
                }
            }else{
                itr->second++;
            }
        }
        int f=0;
        for(auto itr = mp.begin();itr!=mp.end();itr++){
            if(itr->first[0]==itr->first[1]){
                if(itr->second%2==0){ans += itr->second*2;}
                else{
                    ans += (itr->second-1)*2;
                    f=1;
                }
            }
        }
        if(f){ans+=2;}
        return ans;
    }
};