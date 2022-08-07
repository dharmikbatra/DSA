class Solution {
public:
    int maxProfit(vector<int>& p) {
        int bp = p[0],ans=0;
        for(int i=1;i<p.size();i++){
            if(p[i]>=p[i-1]){continue;}
            else{
                ans += p[i-1]-bp;
                bp = p[i];
            }
        }
        if(bp!=p[p.size()-1]){ans += p[p.size()-1]-bp;}
        return ans;
        
    }
};