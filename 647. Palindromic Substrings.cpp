class Solution {
public:
    int palin(string &st, int s, int e){
        int ans = 0;
        while(s>=0 && e<st.length() && st[s]==st[e]){
            ans++;
            s--;
            e++;
        }
        return ans;
    }
    int countSubstrings(string st) {
        int ans=0;
        for(int i=0;i<st.length();i++){
            ans += palin(st,i,i);
            if(i!=st.length()-1){
                ans += palin(st,i,i+1);
            }
        }
        return ans;
    }
};