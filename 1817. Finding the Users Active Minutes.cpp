class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>>mp;
        for(int i=0;i<logs.size();i++){
            mp[logs[i][0]].insert(logs[i][1]);
        }
        vector<int>ans(k,0);
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            ans[(itr->second).size() -1]++;
        }
        return ans;
        
    }
};