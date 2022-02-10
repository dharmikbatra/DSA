class Solution {
public:
    int subarraySum(vector<int>& nm, int k) {
        vector<int> suml(nm.size());
        if(nm.size()==0){return 0;}
        suml[0]=nm[0];
        for(int i=1;i<nm.size();i++){
            suml[i]=suml[i-1]+nm[i];
        }
        int ans=0;
        unordered_map<int,int> mp;
        for(int num:suml){
            mp[num]++;
        }
        for(int i=0;i<suml.size();i++){
            int temp = k+suml[i]-nm[i];
            auto itr = mp.find(temp);
            if(itr!=mp.end()){ans += itr->second;}
            mp[suml[i]]--;
        }
        return ans;
    }
};