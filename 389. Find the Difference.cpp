class Solution {
public:
    char findTheDifference(string s, string t) {
        int ti=0,si=0;
        for(char c:s){
            si += c;
        }
        for(char c:t){
            ti += c;
        }
        return ti-si;
    }
};