class Solution {
public:
    int mySqrt(int x) {
        if(x==0){return 0;}
        if(x==1){return 1;}
        int l=1,h=x/2;
        long long int mid;
        while(l<=h){
            mid = (l+h)/2;
            if(mid*mid > x){
                h = mid-1;
            }else if(mid*mid == x){
                return (int)mid;
            }else{
                l = mid+1;
            }
        }
        if((mid+1)*(mid+1)<x){return (int)mid+1;}
        if(mid*mid < x){return (int)mid;}
        return (int)mid-1;
    }
};