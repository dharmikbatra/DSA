int isTrue(vector<int> &dist, double hour, int speed){
    double total_time = 0;
    for(int i = 0; i < dist.size() - 1; i++){
        total_time += ceil(dist[i] /(double) speed);
    }
    total_time += (dist[dist.size() - 1] / (double)speed);
    if(total_time > hour){
        return 0;
    }else return 1;
}
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if(dist.size() > ceil(hour)){
            return -1;
        }        
        int low = 1;
        int high = 10000000;
        int answer = -1;
        while(low <= high){
            int mid = (high + low) / 2;
            if(isTrue(dist, hour, mid)){
                answer = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return answer;
        
    }
};