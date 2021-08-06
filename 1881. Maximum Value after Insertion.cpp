class Solution {
public:
    string maxValue(string n, int x) {
        int i,c,N=n.size();
        string ans;
        if(n[0]=='-'){c=1;}
        else{c=0;}
        if(c==0){
            i=0;
            while(i<N && n[i]-48>=x){i++;}
            ans = n.substr(0,i);
            ans += x+48;
            ans += n.substr(i,N-i);
            return ans;
        }else{
            n = n.substr(1,N-1);
            N = n.size();
            i = 0;
            while(i<N && n[i]-48<=x){i++;}
            ans = n.substr(0,i);
            ans += x+48;
            ans += n.substr(i,N-i);
            string g = "-";
            g+=ans;
            return g;            
        }
        
    }
};