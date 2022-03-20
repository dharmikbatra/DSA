#include <bits/stdc++.h>
class Solution {
public:
    int minDominoRotations(vector<int>& tp, vector<int>& bt) {
        vector<int> mp(7,0);
        int tn = tp.size(),bn = bt.size();
        for(int i=0;i<tp.size();i++){
            if(tp[i]==bt[i]){
                mp[tp[i]]++;
            }else{
                mp[tp[i]]++;
                mp[bt[i]]++;
            }
        }
        int req = 100,ans = 0,ans2=0;
        for(int itr = 1;itr < 7;itr++){
            if(mp[itr] == tp.size()){
                req = itr;
            }
        }
        if(req==100){return -1;}
        for(int i=0;i<tp.size();i++){
            if(tp[i]==req){ans++;}
            if(bt[i]==req){ans2++;}
        }
        int k = min({ans,ans2,tn-ans,bn-ans2});
        return k;
    }
};