class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        priority_queue<int>maxh;
        int n = nums.size()/2,nf=nums.size(),i;
        for(i=0;i<n;i++){
            maxh.push(nums[i]+nums[nf-i-1]);
        }
        return maxh.top();
        
    }
};