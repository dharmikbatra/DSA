class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = nums[0],i;
        for(i=1;i<nums.size();i++){
            if(min>nums[i]){min=nums[i];}
        }
        int ans=0;
        for(i=0;i<nums.size();i++){
            ans += (nums[i]-min);
        }
        return ans;       
        
    }
};