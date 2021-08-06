class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        if(n<3)
            return true;
        int cnt = 0;
        int pos=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                pos = i;
                cnt++;
            }
            if(cnt==2)
                return false;
        }
        if(pos==-1 || pos==0 || pos==n-2)
            return true;
        if(nums[pos-1]<nums[pos+1] || nums[pos]<nums[pos+2])
            return true;
        return false;        
    }
};