class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0;
        while(a.length()<b.length()){a = "0" + a;}
        while(b.length()<a.length()){b = "0" + b;}
        string ans = a;
        for(int i=a.size()-1;i>=0;i--){
            int k = a[i] - '0' + b[i] - '0' + c;
            if(k<2){
                ans[i] = (char)k+'0';
                c = 0;
            }else if(k==2){
                ans[i] = '0';
                c=1;
            }else{
                ans[i] ='1';
                c = 1;
            }
        }
        if(c==1){
            ans = "1"+ans;
        }
        return ans;
    }
};