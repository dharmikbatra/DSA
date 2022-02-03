class Solution {
public:
    int fourSumCount(vector<int>& n1, vector<int>& n2, vector<int>& n3, vector<int>& n4) {
        int ans = 0;
        unordered_map<int,int> mp1,mp2;
        for(int num:n4){
            for(int num2:n3){
                mp2[num+num2]++;
            }
        }
        for(int num:n1){
            for(int num2:n2){
                mp1[num+num2]++;
            }
        }
        for(auto itr=mp1.begin();itr!=mp1.end();itr++){
            auto itr2 = mp2.find(-1*itr->first);
            if(itr2!=mp2.end()){
                ans += itr->second*itr2->second;
            }
        }
        return ans;
    }
};