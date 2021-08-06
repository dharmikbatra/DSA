class Solution {
    long long int power(long long int x, long long int y)
{
    long long int res = 1; 
    while (y > 0) {
        if (y & 1)
        {res = res * x;res=res%1000000007;} 
        y = y >> 1; 
        x = x * x;
        x=x%1000000007;
    }
    return res;
}
public:
    int countGoodNumbers(long long n) {
        long long int ans=1,k=n/2;
        ans = power(4,k);
        if(n%2!=0){k++;}
        ans *= power(5,k)%1000000007;
        ans = ans%1000000007;

        return (int)ans;
    }
};