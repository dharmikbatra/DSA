class SeatManager {
public:
    set <int> seats; 
    SeatManager(int n) {
        for(int i = 1; i <= n; i++){
            seats.insert(i);
        }
    }
    
    int reserve() {
        int val = *seats.begin();
        seats.erase(val);
        return val;
    }
    
    void unreserve(int seatNumber) {
        seats.insert(seatNumber);
    } 
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */