class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        map<int,long long> mp;
        for(int x:arr){
            mp[x]=1;
        }
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            int curr = arr[i];
            for(int j=0;j<i;j++){
                if(curr%arr[j]==0){
                    auto itr = mp.find(curr/arr[j]);
                    if(itr!=mp.end()){
                        mp[curr] += mp[arr[j]]*itr->second;  
                        mp[curr] = mp[curr]%1000000007;
                    }
                }
            }
        }
        int ans = 0;
        for(auto x:mp){
            ans += x.second;
            ans = ans%1000000007;
        }
        return ans;
    }
};