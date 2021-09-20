class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<p.size();i++){
            pq.push({pow(p[i][0],2)+pow(p[i][1],2), i});
            if(pq.size()>k){pq.pop();}
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            pair<int,int> x = pq.top();
            pq.pop();
            ans.push_back(p[x.second]);
        }
        return ans;
    }
};