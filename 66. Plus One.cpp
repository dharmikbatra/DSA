class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int i = d.size()-1,c = 1,k;
        vector<int> ans;
        for(;i>=0;i--){
            k = d[i]+c;
            if(k>9){
                c = 1;
                d[i] = 0;
            }else{
                d[i]=k;
                c=0;
            }
        }
        if(c){
            vector<int> ans;
            ans.push_back(1);
            for(int x:d){
                ans.push_back(x);
            }
            return ans;
        }
        return d;
    }
};