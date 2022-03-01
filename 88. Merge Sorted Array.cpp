class Solution {
public:
    void merge(vector<int>& nm1, int m, vector<int>& nm2, int n) {
        vector<int> ans;
        int i=0,j=0;
        while(m || n){
            if(m && n){
                if(nm1[i]<nm2[j]){ans.push_back(nm1[i]);i++;m--;}
                else{ans.push_back(nm2[j]);j++;n--;}
            }else if(m){
                ans.push_back(nm1[i]);
                i++;m--;
            }else{
                ans.push_back(nm2[j]);
                j++;n--;
            }
        }
        nm1 = ans;
    }
};