class Solution {
public:
    set<vector<int>> ans;
    int t;
    void solve(vector<int> &nm, int &sum, int i,vector<int> &temp){
        if(sum>t){return;}
        if(i>=nm.size()){
            if(sum==t){
                vector<int> req = temp;
                sort(temp.begin(),temp.end());
                ans.insert(temp);
                temp = req;
            }
            return;
        }
        int b = nm[i],itr;
        for(itr = i;itr<nm.size() && nm[itr]==b;itr++){}
        solve(nm,sum,itr,temp);
        sum += nm[i];
        if(sum>t){sum -= nm[i];return;}
        temp.push_back(nm[i]);
        solve(nm,sum,i+1,temp);
        sum -= nm[i];
        temp.pop_back();
    }
    vector<vector<int>> combinationSum2(vector<int>& nm, int ta) {
        vector<int> temp;
        int sum=0;
        t = ta;
        sort(nm.begin(),nm.end());
        ans.clear();
        vector<vector<int>> ans2;
        solve(nm,sum,0,temp);
        for(auto itr = ans.begin();itr!=ans.end();itr++){
            ans2.push_back(*itr);
        }
        return ans2;
        
    }
};