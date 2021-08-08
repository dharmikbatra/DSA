// mathematical
class Solution {
public:
    long long ncr(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;
   return p;
}
    int uniquePaths(int m, int n) {
        int x = (int)ncr(n+m-2,n-1);
        return x;
    }
};

// DP
class Solution {
public:
    int arr[101][101]={0};
    int uniquePaths(int m, int n) {
        if(m<=1 || n<=1){return 1;}
        if(arr[n][m]!=0){return arr[n][m];}
        int x1,x2;
        x1 = uniquePaths(m-1,n);
        x2 = uniquePaths(m,n-1);
        return arr[n][m]=x1+x2;
    }
};