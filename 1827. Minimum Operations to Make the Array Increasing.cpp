class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i,ans=0;
        for(i=0;i<nums.size();i++){
            while(i<nums.size()-1 && nums[i]<nums[i+1]){
                i++;
            }
            if(i<nums.size()-1)
            {ans += (nums[i]-nums[i+1]+1);
            nums[i+1]=nums[i]+1;}
        }
        return ans;
        
    }
};