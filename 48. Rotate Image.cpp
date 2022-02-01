class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a  = b;
        b = temp;
    }
    void rotate(vector<vector<int>>& A) {
        int n = A.size(),m=n/2;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(A[i][j],A[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                swap(A[j][i],A[j][n-i-1]);
            }
        }
    }
};