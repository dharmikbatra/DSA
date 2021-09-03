class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currmax=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==currmax){count++;}
            else{
                count--;
                if(count==0){
                    currmax=nums[i];
                    count=1;
                }
            }
        }
        // if(currmax!=nums[nums.size()-1]){return currmax;}
        return currmax;
        
    }
};