class Solution {
public:
    set<vector<string>> ans;
    void solve(string &s, int ind, vector<string> &vec, set<string> &st){
        if(ind>=s.length()){
            ans.insert(vec);
            return;
        }
        for(int i=ind;i<s.length();i++){
            string temp = s.substr(ind,i-ind+1);
            if(st.find(temp)!=st.end()){
                vec.push_back(temp);
                solve(s,i+1,vec,st);
                vec.pop_back();
            }
        }
        return;
    }
    string conv(vector<string> &x){
        string ans="";
        for(string s:x){
            ans += s;
            ans += " ";
        }
        ans = ans.substr(0,ans.length()-1);
        return ans;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        ans.clear();
        set<string> st;
        for(string stemp:wordDict){st.insert(stemp);}
        vector<string> myans;
        vector<string> vec;
        solve(s,0,vec,st);
        for(auto x:ans){
            myans.push_back(conv(x));
        }
        return myans;
    }
};