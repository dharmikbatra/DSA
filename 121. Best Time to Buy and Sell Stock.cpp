class Solution {
public:
    int maxProfit(vector<int>& p) {
        vector<int> maxv(p.size());
        int i;
        maxv[p.size()-1]=p[p.size()-1];
        for(i=p.size()-2;i>=0;i--){
            maxv[i]=max(p[i],maxv[i+1]);
        }
        int k,max=0;
        for(i=0;i<p.size()-1;i++){
            k=maxv[i+1]-p[i];
            if(k>max){max=k;}
        }
        return max;
    }
};