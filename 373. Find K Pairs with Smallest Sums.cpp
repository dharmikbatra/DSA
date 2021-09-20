class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nm1, vector<int>& nm2, int k) {
        priority_queue< pair<int, pair<int,int> > > pq;
        int n1 = min(k,(int)nm1.size());
        int n2 = min(k,(int)nm2.size());
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                pq.push({nm1[i]+nm2[j], {nm1[i],nm2[j]} });
                if(pq.size()>k){pq.pop();}
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            pair<int,pair<int,int>> x = pq.top();
            pq.pop();
            vector<int> y = {x.second.first,x.second.second};
            ans.push_back(y);
        }
        return ans;
    }
};