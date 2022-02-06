class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums){
            auto itr = mp.find(num);
            if(itr==mp.end()){
                mp.insert({num,1});
            }else{
                itr->second++;
            }
        }
        int i=0;
        for(auto itr = mp.begin();itr!=mp.end();itr++){
            if(itr->second == 1){nums[i++]=itr->first;}
            else{
                nums[i]=itr->first;
                i++;
                nums[i++]=itr->first;
            }
        }
        // for(int num:nums){cout<<num<<" ";}
        return i;
    }
};