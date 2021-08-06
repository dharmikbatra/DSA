class Solution {
public:
    int dist(int x1,int y1,int x2,int y2){
        int x = x2-x1,y=y2-y1;
        x *= x;y *= y;
        return x+y;
    }
    vector<int> countPoints(vector<vector<int>>& pt, vector<vector<int>>& que) {
        int r,c,i,q = que.size(),p=pt.size(),j;
        vector<int>ans;
        for(i=0;i<q;i++){
            c=0;r=que[i][2]*que[i][2];
            for(j=0;j<p;j++){
                if(dist(pt[j][0],pt[j][1],que[i][0],que[i][1])<=r){c++;}                                
            }
            ans.push_back(c);
        }
        return ans;
        
    }
};