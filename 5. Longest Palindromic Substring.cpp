class Solution {
public:
   
    string expandPalindrome(string s, int l, int r) {
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                l--;
                r++;
            }
            return s.substr(l + 1, r-l-1);
    }
    string longestPalindrome(string s) {
        string lps = "";
        int n = s.length();
        for (int i = 0; i < n; i++) {
            string odd = expandPalindrome(s, i, i);
            string even = expandPalindrome(s, i, i + 1);
            if (lps.length() < odd.length()) {
                lps = odd;
            }

            if (lps.length() < even.length()) {
                lps = even;
            }
        }
        return lps;
    }
    
    
};