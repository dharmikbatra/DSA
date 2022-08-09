class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> nums2 = nums;
        sort(nums2.begin(),nums2.end());
        int i=0,j=nums.size()-1;
        while(i<nums.size() && nums2[i]==nums[i]){i++;}
        while(j>=i && nums2[j] == nums[j]){j--;}
        return j-i+1;
        
    }
};