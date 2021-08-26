class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string st="";
        for(int i=0;i<n;i++)
        {
            if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
            {
                st += s[i];
            }
        }
        int i=0;
        int j=st.size()-1;
        while(i<j)
        {
            if(st[i]==st[j])
            {
                i++;
                j--;
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};