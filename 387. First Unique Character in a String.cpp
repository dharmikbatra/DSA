class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-97]++;
        }
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-97]<2){return i;}
        }
        return -1;
    }
};