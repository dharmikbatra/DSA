class KthLargest {
public:
    priority_queue<int , vector<int>, greater<int>>minh;
    int kg;
    KthLargest(int k, vector<int>& nm) {
        kg = k;
        for(int i=0;i<nm.size();i++){
            minh.push(nm[i]);
            if(minh.size()>k){minh.pop();}
        }
    }
    
    int add(int val) {
        minh.push(val);
        if(minh.size()>kg)
        minh.pop();
        return minh.top();
    }
};