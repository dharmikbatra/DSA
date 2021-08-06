class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int i=0,j;
        while(s[i]==' '){i++;continue;}
        for(j=0;j<k && i<s.length();j++){
            while(i<s.length() && s[i]!=' '){i++;}
            i++;
        }
        return s.substr(0,i-1);
        
    }
};