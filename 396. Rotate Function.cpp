class Solution {
public:
    int maxRotateFunction(vector<int>& nm) {
        int f1,fo=0, sum = 0;
        for(int i=0;i<nm.size();i++){
            fo += i*nm[i];
            sum += nm[i];
        }
        int ans = fo, n = nm.size();
        for(int i=0;i<nm.size();i++){
            f1 = fo + sum - n*nm[n-i-1];
            ans = max(ans,f1);
            fo = f1;
        }
        return ans;
    }
};