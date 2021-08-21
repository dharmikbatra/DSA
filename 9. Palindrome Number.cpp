class Solution {
public:
    bool isPalindrome(int x) {
        int i=0,j;
        string s = to_string(x);
        j = s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){return false;}
            i++;j--;
        }
        return true;
    }
};