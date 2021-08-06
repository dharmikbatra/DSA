class Solution {
public:
    int check(int n){
        int k = n,i;
        while(n){
            i = n%10;
            if(i==0){return 0;}
            if(k%i!=0){return 0;}
            n/=10;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        int i;
        vector<int>ans;
        for(i=left;i<=right;i++){
            if(check(i)){ans.push_back(i);}
        }
        return ans;
    }
};