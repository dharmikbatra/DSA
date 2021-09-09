class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i,len = min(w1.length(),w2.length());
        string s;
        for(i=0;i<len;i++){
            s += w1[i];
            s += w2[i];
        }
        if(w1.length()>w2.length()){
            s += w1.substr(i,w1.length()-i);
        }else{
            s += w2.substr(i,w2.length()-i);
        }
        return s;
    }
};