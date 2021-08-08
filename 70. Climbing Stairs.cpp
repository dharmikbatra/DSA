class Solution {
public:
    int arr[46]={0};
    int climbStairs(int n) {
        if(n==1){return 1;}
        if(n==2){return 2;}
        if(arr[n]!=0){return arr[n];}
        else return arr[n]=(climbStairs(n-1)+climbStairs(n-2));
    }
};