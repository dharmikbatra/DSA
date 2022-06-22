class Solution {
public:
    
    string mostCommonWord(string p, vector<string>& banned) {
        transform(p.begin(), p.end(), p.begin(), ::tolower);
        int i=0;
        set<string> st;
        map<string,int> mp;
        for(string s:banned){
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            st.insert(s);
        }
        while(i<p.length()){
            while(i<p.length() &&(p[i]==39 || p[i]==' '|| p[i]=='!'|| p[i]=='?'|| p[i]==','|| p[i]==';'|| p[i]=='.')){i++;}
            int j = i;
            while(j<p.length() && p[j]!=39 && p[j]!=' '&& p[j]!='!'&& p[j]!='?'&& p[j]!=','&& p[j]!=';'&& p[j]!='.'){j++;}
            string x = p.substr(i,j-i);
            auto itr = st.find(x);
            if(itr==st.end()){
                mp[x]++;
            }
            i = j+1;
        }
        string ans;
        i = INT_MIN;
        for(auto itr = mp.begin();itr!=mp.end();itr++){
            if(itr->second>i){
                i = itr->second;
                ans = itr->first;
            }
        }
        return ans;
    }
};