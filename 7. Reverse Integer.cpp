class Solution {
public:
    int reverse(int x) {
        long int ans = 0,y=x,count=0,X=x;
        int s=x<0?1:0;
        if(s){y = y*-1;}
        while(y){
            count++;
            y /= 10;
        }
        y = pow(10,count-1);
        if(s){X = X*-1;}
        for(int i=0;i<count;i++){
            ans += (X%10)*y;
            if(ans>INT_MAX){return 0;}
            y/=10;
            X/=10;
        }
        if(s){return ans*-1;}
        return (int)ans;
        
    }
};