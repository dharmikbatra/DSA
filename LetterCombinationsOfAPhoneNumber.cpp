class Solution {
public:
    void generate(vector<string> &ans,vector<string> &req,int ind,string &k ){
        if(ind==req.size()){
            ans.push_back(k);
            return;
        }
        for(int i=0;i<req[ind].length();i++){
            k += req[ind][i];
            generate(ans,req,ind+1,k);
            k = k.substr(0,ind);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        map<int,string>mp;
        mp.insert({2,"abc"});
        mp.insert({3,"def"});
        mp.insert({4,"ghi"});
        mp.insert({5,"jkl"});
        mp.insert({6,"mno"});
        mp.insert({7,"pqrs"});
        mp.insert({8,"tuv"});
        mp.insert({9,"wxyz"});
        vector<string> ans;
        vector<string> req;
        if(digits==""){return ans;}
        for(int i=0;i<digits.length();i++){
            int t = digits[i]-48;
            req.push_back(mp[t]);
        }
        string s;
        generate(ans,req,0,s);
        return ans;
        
        
    }
};