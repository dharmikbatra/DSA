class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nm, int mb) {
        int x = nm[0],i;
        for(i=1;i<nm.size();i++){
            x = x^nm[i];
        }
        int m = 0,y=1;
        for(i=0;i<mb;i++){
            m += y;
            y*=2;
        }
        vector<int>ans(nm.size());
        for(i=0;i<nm.size();i++){
            ans[i] = x^m;
            x = x^nm[nm.size()-1-i];
        }
        return ans;
        
        
    }
};