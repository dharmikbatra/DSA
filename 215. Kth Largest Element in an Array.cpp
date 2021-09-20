class Solution {
public:
    int findKthLargest(vector<int>& nm, int k) {
        priority_queue <int,vector<int>,greater<int>> pq;
        for(int i=0;i<nm.size();i++){
            pq.push(nm[i]);
            if(pq.size()>k){pq.pop();}
        }
        return pq.top();
    }
};