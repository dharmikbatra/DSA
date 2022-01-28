class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int i=0,j;
        while(i<A.size() && A[i]<0){i++;}
        j=i-1;
        vector<int> ans;
        while(i<A.size() && j>=0){
            if(abs(A[j]) < A[i]){
                ans.push_back(A[j]*A[j]);
                j--;
            }else{
                ans.push_back(A[i]*A[i]);
                i++;
            }
        }
        while(i<A.size()){
            ans.push_back(A[i]*A[i]);
            i++;
        }
        while(j>=0){
            ans.push_back(A[j]*A[j]);
            j--;
        }
        return ans;
    }
};