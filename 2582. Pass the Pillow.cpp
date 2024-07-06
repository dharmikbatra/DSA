class Solution {
public:
    int passThePillow(int n, int time) {
        int x = time/(n-1);
        if(x%2==0){
            time = time%(n-1);
            return time+1;
        }else{
            time = time%(n-1);
            return n-time;
        }
    }
};