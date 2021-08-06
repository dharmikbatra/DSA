class Solution {
public:
    int maximumPopulation(vector<vector<int>>& l) {
        int i,j,ans,c,max=INT_MIN,n=l.size(),y;
        for(i=1950;i<2051;i++){
            c=0;y=i;
            for(j=0;j<n;j++){
                if(l[j][0]<=y && y<l[j][1]){c++;}
            }
            if(c>=max){
                if(max==c){
                    if(ans>y){ans=y;}
                }else{
                    max=c;
                    ans=y;                    
                }
            }
        }
        return ans;        
    }
};