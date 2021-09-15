class Solution {
public:
    int trap(vector<int>& h) {
        vector<int> maxl(h.size());
        maxl[0]=h[0];
        vector<int> maxr(h.size());
        maxr[h.size()-1]=h[h.size()-1];
        for(int i=1;i<h.size();i++){
            maxl[i]=max(h[i],maxl[i-1]);
        }
        for(int i=h.size()-2;i>=0;i--){
            maxr[i]=max(maxr[i+1],h[i]);
        }
        int ans=0;
        for(int i=1;i<h.size()-1;i++){
            int k = min(maxl[i],maxr[i])-h[i];
            if(k>0){ans+=k;}
        }
        return ans;
    }
};