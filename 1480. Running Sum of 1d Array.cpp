class Solution {
public:
    vector<int> runningSum(vector<int>& nm) {
        int req=0;
        for(int i=0;i<nm.size();i++){
            req += nm[i];
            nm[i]=req;
        }
        return nm;
    }
};