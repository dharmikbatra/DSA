class Solution {
public:
    int missingNumber(vector<int>& nm) {
        vector<int> n(nm.size()+1,0);
        for(int i=0;i<nm.size();i++){
            n[nm[i]]++;
        }
         for(int i=0;i<n.size();i++){
            if(n[i]==0){return i;}
        }
        return -1;
    }
};