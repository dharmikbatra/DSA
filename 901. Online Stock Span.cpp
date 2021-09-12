class StockSpanner {
public:
    stack<pair<int,int>> st;
    int i;
    StockSpanner() {
        i=0;
    }
    
    int next(int price) {
        while(!st.empty() && st.top().first<=price){st.pop();}
        if(st.empty()){
            st.push({price,i});
            i++;
            return i;
        }
        auto x = st.top();
        st.push({price,i});
        i++;
        return i-x.second-1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */