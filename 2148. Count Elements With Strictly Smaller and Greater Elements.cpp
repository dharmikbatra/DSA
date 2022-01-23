class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini=INT_MAX,maxi=INT_MIN,cmx=0,cmn=0;
        for(int i=0;i<nums.size();i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){cmn++;}
            if(nums[i]==maxi){cmx++;}
        } 
        cmx = nums.size()-cmn-cmx; 
        if(cmx>0){return cmx;}
        return 0;
    }
};