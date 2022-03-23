class Solution {
public:
    int solve(int &sv, int t){
        if(sv==t){return 0;}
        if(sv>t){return sv-t;}
        if(t%2==0){
            return 1+solve(sv,t/2);
        }else{
            return 1+solve(sv,t+1);
        }
    }
    int brokenCalc(int sV, int t) {
        return solve(sV,t);
    }
};