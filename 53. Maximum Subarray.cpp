class Solution {
public:
    int maxSubArray(vector<int>& nm) {
        int msf = INT_MIN,meh=0;
        for(int i=0;i<nm.size();i++){
            meh += nm[i];
            if(msf<meh){msf = meh;}
            if(meh<0){meh = 0;}
        }
        return msf;
    }
};