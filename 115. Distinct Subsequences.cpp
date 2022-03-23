class Solution {
public:
    map<pair<int,int>, int> mp;
    int solve(string &s, string &t, int i, int j){
        if(j<0){return 1;}
        if(i<0){return 0;}
        if(i<j){return 0;}
        auto itr = mp.find({i,j});
        if(itr!=mp.end()){return itr->second;}
        int ans=0;
        for(int k=i;k>=0;k--){
            if(s[k]==t[j]){ans += solve(s,t,k-1,j-1);}
        }
        return mp[{i,j}] = ans;
    }
    int numDistinct(string s, string t) {
        mp.clear();
        return solve(s,t,s.size()-1,t.size()-1);
    }
};