class Solution {
public:
    string replaceDigits(string s) {
        int n=s.length(),i;
        for(i=1;i<n;i+=2){
            s[i] = s[i-1] + s[i]-48;
        }
        return s;
    }
};