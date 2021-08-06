class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int N = dist.size(),i;
        for(i =0;i<N;i++)
        {
            dist[i] = dist[i]%speed[i]==0?dist[i]/speed[i]:dist[i]/speed[i]+1;
        }
        sort(dist.begin(),dist.end());
        int ans =1;
        for(i=1;i<N;i++)
        {
            if(i<dist[i]){ans++;}
            else{break;}
        }
        return ans;        
    }
};