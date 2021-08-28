class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int> mp;
        for(int i=0;i<n1.size();i++){
            auto itr = mp.find(n1[i]);
            if(itr==mp.end()){mp.insert({n1[i],1});}
            else{itr->second++;}
        }
        vector<int> ans;
        for(int i=0;i<n2.size();i++){
            auto itr = mp.find(n2[i]);
            if(itr==mp.end()){continue;}
            else{
                itr->second--;
                ans.push_back(n2[i]);
                if(itr->second==0){
                    mp.erase(itr);
                }
            }
        }
        return ans;
    }
};