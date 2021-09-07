class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxdist = 0,k;
        if(nums.size()==1){return true;}
        for(int i=0;i<nums.size();i++){
             if(maxdist<i){return false;
                if(maxdist<i)return false;
            }
            k = i+nums[i];
            if(k>maxdist){maxdist=k;}
            
        }
        return true;
    }
};