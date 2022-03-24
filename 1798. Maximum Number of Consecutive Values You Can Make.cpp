class Solution {
public:
    // map<pair<int,int>, bool> mp;
    // bool tarsum(vector<int> &coins, int t, int i){
    //     if(t==0){return true;}
    //     if(t<0){return false;}
    //     if(i>=coins.size()){return false;}
    //     auto itr = mp.find({t,i});
    //     if(itr!=mp.end()){return itr->second;}
    //     if(coins[i] > t){return mp[{t,i}] = tarsum(coins,t,i+1);}
    //     else {return mp[{t,i}] = tarsum(coins,t,i+1) || tarsum(coins,t-coins[i],i+1);}
    // }
    int getMaximumConsecutive(vector<int> &c){
        int result = 0;
        sort(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            if(c[i]<=result+1){result += c[i];continue;}
            break;
        }
        return ++result;
    }
};