class Solution {
public:
    int findLengthOfLCIS(vector<int>& nm) {
        int i,curr,ans=INT_MIN;
        for(i=0;i<nm.size();i++){
            curr=1;
            while(i<nm.size()-1 && nm[i]<nm[i+1]){curr++;i++;}
            // if(i<nm.size()-2){i--;}
            ans = max(ans,curr);
        }
        return ans;
    }
};