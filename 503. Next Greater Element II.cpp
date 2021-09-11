class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nm) {
        vector<int> ans;
        for(int i=0;i<nm.size();i++){
            int k=0;
            for(int j=(i+1)%nm.size();j>=0 && j<nm.size() && k<nm.size();j= (j+1)%nm.size(),k++){
                if(nm[j]<=nm[i]){continue;}
                else{
                    ans.push_back(nm[j]);
                    break;
                }
            }
            if(k==nm.size()){ans.push_back(-1);}
        }
        return ans;
    }
};