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
    bool detectCapitalUse(string w) {
        if(w.length()<=1){return true;}
        if(isUpper(w[0])){
            if(isUpper(w[1])){
                for(int i=2;i<w.length();i++){
                    if(isLower(w[i])){return false;}
                }
            }else{
                for(int i=2;i<w.length();i++){
                    if(isUpper(w[i])){return false;}
                }
            }
        }else{
            for(int i=1;i<w.length();i++){
                if(isUpper(w[i])){return false;}
            }
        }
        return true;
    }
};