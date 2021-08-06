class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& c, int ex) {
        double avgt=0,avgc;
        priority_queue<pair<double,int>>maxh;
        for(int i=0;i<c.size();i++){
            avgc = (double)c[i][0]/c[i][1];
            avgt += avgc;
            avgc = (double)(c[i][0]+1)/(c[i][1]+1)-(double)c[i][0]/c[i][1];
            maxh.push({avgc,i});
        }
        pair<double,int>x;
        while(ex--){
            x = maxh.top();
            maxh.pop();
            avgt -= (double)c[x.second][0]/c[x.second][1];
            c[x.second][0]++;
            c[x.second][1]++;
            avgc = (double)c[x.second][0]/c[x.second][1];
            avgt += avgc;
            avgc = (double)(c[x.second][0]+1)/(c[x.second][1]+1)-(double)c[x.second][0]/c[x.second][1];
            maxh.push({avgc,x.second});
        }
        return avgt/c.size();
        
    }
};