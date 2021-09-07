class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        if(nums.size()==1){return nums[0];}
        int l = 0,h = nums.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(mid+1<nums.size() && nums[mid]>nums[mid+1]){return nums[mid+1];}
            else if(mid-1>=0 && nums[mid]<nums[mid-1]){return nums[mid];}
            else if(nums[mid]>nums[l]){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return nums[0];
    }
};