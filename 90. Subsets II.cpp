class Solution {
public:
    set<vector<int>> st;
    void solve(vector<int> &nm,int i, vector<int> &temp){
        if(i>=nm.size()){
            vector<int> k = temp;
            sort(temp.begin(),temp.end());
            st.insert(temp);
            temp = k;
            return;
        }
        solve(nm,i+1,temp);
        temp.push_back(nm[i]);
        solve(nm,i+1,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        st.clear();
        vector<vector<int>> ans;
        solve(nums,0,temp);
        for(vector<int> x:st){
            ans.push_back(x);
        }
        return ans;
    }
};