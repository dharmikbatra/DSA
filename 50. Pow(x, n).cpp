class Solution {
public:
    map<pair<double,int>,double> mp;
    double myPow(double x, int n) {
        if(n==0){return 1;}
        if(x==1){return 1;}
        if(n==1){return x;}
        auto itr = mp.find({x,n});
        if(itr!=mp.end()){return itr->second;}
        if(n<0){
            long int N = n;
            N *= -1;
            if(x==-1){
                if(N%2){return -1;}
                return 1;
            }
            if(N > 2147483647){N=2147483647;}
            n=(int)N;
            return mp[{x,n}] = myPow(1/x,n);
        }else{
            if(n%2==0){
                return mp[{x,n}] = myPow(x,n/2)*myPow(x,n/2);
            }else{
                return mp[{x,n}] = x*myPow(x,n-1);
            }
        }
    }
};