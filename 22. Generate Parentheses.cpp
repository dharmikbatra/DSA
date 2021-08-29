class Solution {
public:
    
   vector<string> ans;
    vector<string> generateParenthesis(int n) {
        solve(0,0,n,"");
        return ans;
    }
    void solve(int p,int k,int n,string str){
        if(k==p&&p==n){
            ans.push_back(str);
            return;
        }
        if(p<n){
            solve(p+1,k,n,str+"(");
        }
        
        if(p>k){
            solve(p,k+1,n,str+")");
        }
    }
};