class Solution {
public:
    int findComplement(int n) {
        long int ans = 0,k,t=1;
        if(n==0){return 1;}
        while(n){
            k = n%2;
            n/=2;
            if(k==0){
                ans = ans | t;
            }
            t *= 2;
        }
        return (int)ans;
    }
};