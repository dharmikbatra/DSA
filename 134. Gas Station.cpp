class Solution {
public:
    bool fxn(int i, vector<int> &gas , vector<int> &cost){
        int n = gas.size(),n2 = gas.size();
        int itr = (i+1)%n2,itrp=i;
        int f= gas[i];
        while(n--){
            f -=  cost[itrp];
            if(f<0){return false;}
            f += gas[itr];
            itr = (itr+1)%n2;
            itrp = (itrp+1)%n2;
        }
        return true;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        for(int i=0;i<gas.size();i++){
            if(fxn(i,gas,cost)){return i;}
        }
        return -1;
    }
};