class Solution {
public:
    int arr[101][101];
    int solve(vector<vector<int>>& mx, int i, int j){
        if(i>=(mx.size())){return 0;}
        if(j<0 || j>=mx[0].size()){return 0;}
        if(arr[i][j] !=-1){return arr[i][j];}
        int a,b,c;
        a=b=c=1234567;
        if((i+1)<mx.size()){
            a =  mx[i][j]+solve(mx,i+1,j);
            if((j+1)<mx[0].size()){
                b = mx[i][j] + solve(mx,i+1,j+1);
            }
            if((j-1)>=0){
                c = mx[i][j] + solve(mx,i+1,j-1);
            }
        }else{
            return arr[i][j] = mx[i][j];
        }
        return arr[i][j] = min(a,min(b,c));
    }
    int minFallingPathSum(vector<vector<int>>& mx) {
        int ans=INT_MAX;
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<mx[0].size();i++){
            ans = min(ans,solve(mx,0,i));
        }
        return ans;
    }
};