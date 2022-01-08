class Solution {
public:
    bool isUpper(char &c){
        if(c>='A' && c<='Z'){return true;}
        return false;
    }
    bool isLower(char &c){
        if(c>='a' && c<='z'){return true;}
        return false;
    }
    void solve(string &s, int st, int end){
        if(end-st+1<3){
            for(int i=st;i<=end;i++){
                if(isUpper(s[i])){
                    s[i]=s[i]+'a'-'A';
                }
            }
        }else{
            if(isLower(s[st])){
                s[st]=s[st]-'a'+'A';
            }
            for(int i=st+1;i<=end;i++){
                if(isUpper(s[i])){
                    s[i]=s[i]+'a'-'A';
                }
            }
        }
    }
    string capitalizeTitle(string t) {
        int st=0,end=0;
        while(end<t.length()){
            if(t[end]==' ' || end==t.length()-1){
                if(end==t.length()-1){
                    solve(t,st,end);
                }else{
                    solve(t,st,end-1);                    
                }
                st=end+1;
                end++;
            }else{
                end++;
            }
        }
        return t;
    }
};