class Solution {
public:
    vector<int> topKFrequent(vector<int>& nm, int k) {
        map<int, int> mp;
        for(int i=0;i<nm.size();i++){
            auto itr = mp.find(nm[i]);
            if(itr==mp.end()){
                mp.insert({nm[i],1});
            }else{
                itr->second++;
            }
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto itr = mp.begin();itr!=mp.end();itr++){
            pq.push({itr->second,itr->first});
            if(pq.size()>k){pq.pop();}
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};