class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++){
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k){pq.pop();}
        }
        arr.clear();
        while(!pq.empty()){
            arr.push_back(pq.top().second);
            pq.pop();
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};