class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double currTime = customers[0][0], totalTime = 0;
        for(vector<int> x: customers){
            if(currTime<x[0]){currTime = x[0]+x[1];}
            else currTime +=  x[1];
            double temp = currTime - (x[0]);
            totalTime += temp;
        }
        return totalTime/customers.size();
    }
};
