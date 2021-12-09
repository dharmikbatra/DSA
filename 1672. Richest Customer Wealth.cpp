class Solution {
public:
    int maximumWealth(vector<vector<int>>& ac) {
        int ans=INT_MIN,sum=0;
        for(int i=0;i<ac.size();i++){
            sum=0;
            for(int j=0;j<ac[0].size();j++){
                sum += ac[i][j];
            }
            if(sum>ans){ans=sum;}
        }
        return ans;
    }
};