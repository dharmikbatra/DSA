class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int i = A.size()-2;
        while(i >= 0 && A[i]>=A[i+1]){i--;}
        if(i < 0){
            reverse(A.begin(),A.end());
            return;
        }
        int ind=i,req=INT_MAX;
        for(int j=i+1;j<A.size();j++){
            if(A[j]>A[i]){
                if(A[j]<req){
                    req=A[j];
                    ind=j;
                }
            }
        }
        swap(A[i],A[ind]);
        sort(A.begin()+i+1,A.end());
    }
};