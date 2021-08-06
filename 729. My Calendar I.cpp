class MyCalendar {
public:
    map<int,int>mp;
    MyCalendar() {
                    
    }
    
    bool book(int start, int end) {
        if(mp.size()==0){mp.insert({start,end});return true;}
        else {
            int i;
            auto itr = mp.find(start);
            if(itr==mp.end()){
                mp.insert({start,end});
            }else {return false;}
            itr = mp.find(start);
            auto itr2 = itr;
            auto itrprev = --itr;
            auto itrfor = ++itr2;
            if(itrprev->second<=start){
                if(itrfor==mp.end()){return true;}
                else if(end<=itrfor->first){return true;}
                else {mp.erase(start);return false;}
            }else {
                mp.erase(start);
                return false;
            }
        }
    }
};
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */