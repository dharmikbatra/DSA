class Solution {
public:
    string removeKdigits(string num, int k) {
        map<char,vector<int>> mp;
        for(int i=0;i<num.size();i++){
            mp[num[i]].push_back(i);
        }
        string ans;
        int rem = 0;
        auto itr = mp.rbegin();
        while(itr != mp.rend())
        {
            for(int j=0;j<itr->second.size() && k>0;j++){
                num.erase(itr->second[j]-rem);
                rem++;k--;
            }
            itr++;
        }
        return num;
    }
};