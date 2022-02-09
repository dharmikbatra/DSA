class Solution {
public:
    int findPairs(vector<int>& nm, int k) {
        set<int> st;
        set<int> same;
        for(int num:nm){
            auto itr = st.find(num);
            if(itr==st.end())
            st.insert(num);
            else same.insert(num);
        }
        int i=0;
        for(auto itr = st.begin();itr!=st.end();itr++){
            nm[i++]= *itr;
        }
        int n =i,ans=0;
        for(i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nm[i]-nm[j])==k){ans++;}
            }
        }
        if(k==0){return ans+same.size();}
        return ans;
    }
};