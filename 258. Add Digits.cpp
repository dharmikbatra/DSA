class Solution {
public:
    int solve(int n){
        int ans = 0;
        while(n){
            ans += n%10;
            n/=10;
        }
        return ans;
    }
    int addDigits(int num) {
        while(num/10 != 0){
           num = solve(num);
        } 
        return num;
    }
};