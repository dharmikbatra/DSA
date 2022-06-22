class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        set<int> st;
        vector<int> ans;
        int n = d.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k =0;k<n;k++){
                    if(d[k]%2 || d[i]==0|| i==j || i==k || j==k){continue;}
                    st.insert((100*d[i])+(10*d[j])+d[k]);
                }
            }
        }
        for(auto itr = st.begin();itr!=st.end();itr++){
            ans.push_back(*itr);
        }
        return ans;
    }
};