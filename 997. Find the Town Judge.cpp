class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> v(n+1,0);
        vector<int> v1(n+1,0);
        for(int i=0;i<trust.size();i++){
            v[trust[i][0]]++;
            v1[trust[i][1]]++;
        }
        int ans = -1, c=0;
        for(int i=1;i<=n;i++){
            if(v[i]==0 && v1[i]==(n-1)){
                if(c==0){ans=i;c=1;}
                else{return -1;}
            }
        }
        return ans;
    }
};