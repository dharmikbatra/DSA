class Solution {
public:
    string sortSentence(string s) {
        string smy[10];
        string sd;
        int i,n=s.length(),ind,st,e;
        for(i=0;i<10;i++){
            smy[i]="";
        }
        
        for(i=0;i<n;i++){
            st = i;
            while(s[i]!=32 && i<n){i++;}
            e = i-1;
            ind = s[e]-49;
            sd = s.substr(st,e-st);
            smy[ind] = sd;
        }
        i = 0;s="";
        while(smy[i].length()!=0){
            s += smy[i];
            s += " ";
            i++;
        }
       string ans = s.substr(0,s.length()-1);
        return ans;
        
    }
};