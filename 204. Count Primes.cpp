class Solution {
public:
    int countPrimes(int n) {
        vector<int> p(n+1,0);
        int k = sqrt(n);
        for(int i=2;i<=k;i++){
            for(int j=2;j*i<n;j++){
                p[i*j]++;
            }            
        }
        int ans=0;
        for(int i=2;i<n;i++){
            if(!p[i]){ans++;}
        }
        return ans;
    }
};