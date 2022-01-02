class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& t) {
        map<int, int> mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]%60]++;
        }
        int ans = 0,k,at=0;
        auto itr = mp.find(30);
        if(itr!=mp.end()){
            ans = itr->second*(itr->second-1)/2;
        }
        itr = mp.begin();
        if(itr->first==0){
            ans += itr->second*(itr->second-1)/2;
            itr++;
        }
        for(;itr!=mp.end();itr++){
            k = itr->first;
            if(k==30){continue;}
            auto itr2 = mp.find(60-k);
            if(itr2!=mp.end()){
                at += itr2->second*itr->second;
            }            
        }
        at /= 2;
        ans += at;
        return ans;
    }
};