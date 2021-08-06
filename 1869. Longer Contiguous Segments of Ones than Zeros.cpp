class Solution {
public:
    bool checkZeroOnes(string s) {
        int i,k,max1s=INT_MIN,max0s=INT_MIN,n=s.length();
        char c;
        for(i=0;i<n;i++){
            c = s[i];
            if(c=='1'){
                k=0;
                while(c==s[i] && i<n){k++;i++;}
                if(k>max1s){max1s=k;}
                i--;                
            }else{
                k=0;
                while(c==s[i] && i<n){k++;i++;}
                if(k>max0s){max0s=k;}
                i--;
            }
        }
        if(max1s>max0s){return 1;}
        else return 0;
        
    }
};