class Solution {
public:
    set <vector<int>> st;
    void solve(vector<int> &a,int prevel,int i,vector<int> &v){
        if(i>=a.size()){
            st.insert(v);
            return;
        }
        
        if(a[i]>=prevel){
            v.push_back(a[i]);
            solve(a,a[i],i+1,v);
            v.pop_back();
            solve(a,prevel,i+1,v);
        }else{
            solve(a,prevel,i+1,v);
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& a) {
        st.clear();
        vector<int> v;
        solve(a,INT_MIN,0,v);
        vector<vector<int>> ans;
        for(auto it = st.begin();it!=st.end();it++){
            if((*it).size()<=1){continue;}
            ans.push_back(*it);
        }
        return ans;
    }
};