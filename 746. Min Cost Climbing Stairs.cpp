class Solution {
public:
    int arr[1001];
    int solve(int i, vector<int> &cost){
        if(i>=cost.size()){return 0;}
        if(arr[i]!=-1){return arr[i];}
        return arr[i] = cost[i] + min(solve(i+1,cost),solve(i+2,cost));
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(arr,-1,sizeof(arr));
        return min(solve(0,cost),solve(1,cost));
    }
};