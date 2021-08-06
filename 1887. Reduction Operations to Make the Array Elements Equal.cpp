class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int,int>mp;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            auto itr = mp.find(nums[i]);
            if(itr==mp.end()){mp.insert({nums[i],1});}
            else{itr->second++;}
        }
        auto itr2 = mp.begin();
        itr2++;
        int ans=0;
        i=1;
        for(;itr2!=mp.end();itr2++){
            ans += (i)*(itr2->second); 
            i++;
        }
        return ans;
        
    }
};