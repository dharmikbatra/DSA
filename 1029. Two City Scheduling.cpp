class Solution {
public:
//     int n;
//     map<vector<int>, int> mp;
//     int solve(vector<vector<int>>& c, int i, int ca, int cb){
//         if(i>=c.size()){return 0;}
        
//         if(ca==n && cb ==n){return 0;}
//         vector<int> t = {i,ca,cb};
//         auto itr = mp.find(t);
//         if(itr!=mp.end()){return itr->second;}
//         if(ca==n){
//             return mp[t] = c[i][1] + solve(c,i+1,ca,cb+1);
//         }
//         if(cb==n){
//             return mp[t] = c[i][0] + solve(c,i+1,ca+1,cb);
//         }
//         return mp[t] = min(c[i][1] + solve(c,i+1,ca,cb+1),c[i][0] + solve(c,i+1,ca+1,cb));
        
//     }
    static bool foo(vector<int> &a,vector<int> &b)
    {
        return (a[0]-a[1])<(b[0]-b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // n  = costs.size()/2;
        // mp.clear();
        // return solve(costs,0,0,0);
        sort(costs.begin(),costs.end(),foo);
        int ans=0;
        for(int i=0;i<costs.size();i++)
        {
            if(i<costs.size()/2)
                ans+=costs[i][0];
            else
                ans+=costs[i][1];
        }
        return ans;
    }
};


/* 
 n    n 
 




*/