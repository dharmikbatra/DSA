class Solution {
public:
    int removeDuplicates(vector<int>& nm) {
        int i;
        set<int> st;
        for(i=0;i<nm.size();i++){
            st.insert(nm[i]);
        }
        i=0;
        for(auto itr=st.begin();itr!=st.end();itr++){
            nm[i++]=*itr;
        }
        return st.size();
        
    }
};