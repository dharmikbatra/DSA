class Solution {
public:
    vector<int> shuffle(vector<int>& nm, int n) {
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
            ans[2*i]=nm[i];
            ans[2*i + 1] = nm[i+n];
        }
        return ans;
    }
};