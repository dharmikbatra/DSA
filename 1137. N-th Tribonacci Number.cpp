class Solution {
public:
    int arr[38];
    int fxn(int n){
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;
        if(arr[n]!=-1){return arr[n];}
         return arr[n]=fxn(n-1)+fxn(n-2)+fxn(n-3);
    }
    int tribonacci(int n) {
        memset(arr,-1,sizeof(arr));
        return fxn(n);
       
    }
};