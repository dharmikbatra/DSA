class Solution {
public:
    string solve(string &s1,string &s2){
        string ans;
        int i = 0;
        while(i<s1.length() && i<s2.length() && s1[i]==s2[i]){
            ans += s1[i++];
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& st) {
        string ans = st[0];
        for(int i=1;i<st.size();i++){
            ans = solve(ans,st[i]);
        }
        return ans;
    }
};