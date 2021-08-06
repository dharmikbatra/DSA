class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& st) {
        vector<vector<int>> vec(st.size(),vector<int>(26,0));
        int i,j;
        map<vector<int>,vector<int>>mp;
        for(i=0;i<st.size();i++){
            for(j=0;j<st[i].length();j++){
                vec[i][st[i][j]-97]++;
            }
            auto itr = mp.find(vec[i]);
            if(itr==mp.end()){
                vector<int>v = {i};
                mp.insert({vec[i],v});
            }else{
                itr->second.push_back(i);
            }
        }
        vector<vector<string>>ans;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            vector<string>k;
            for(i=0;i<itr->second.size();i++){
                k.push_back(st[itr->second[i]]);
            }
            ans.push_back(k);
            
        }
        return ans;
    }
};