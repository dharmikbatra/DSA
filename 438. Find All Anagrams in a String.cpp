class Solution {
public:
    vector<int> calc(string &s, int n){
        vector<int> sv(26,0);
        for(int j=0;j<n;j++){
           sv[s[j]-'a']++;
        }
        return sv;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.length()<p.length()){return ans;}
        vector<int> sv=calc(s,p.size()),pv=calc(p,p.size());
        if(sv==pv){ans.push_back(0);}
        int j=0;
        for(int i=p.size();i<s.length();i++,j++){
            sv[s[j]-'a']--;
            sv[s[i]-'a']++;
            if(sv==pv){ans.push_back(i-p.size()+1);}
        }
        return ans;
    }
};