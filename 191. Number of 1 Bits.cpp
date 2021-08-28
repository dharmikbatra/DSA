class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0,i=32,j;
        int need = 1;
        while(i--){
            j = n & need;
            if(j!=0){ans++;}
            if(i!=0)
            need = need<<1;            
        }
        return ans;        
    }
};