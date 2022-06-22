class Solution {
public:
    string convert(string s, int nm) {
        vector<string> arr(nm);
        if(nm==1){return s;}
        int itr = 0;
        bool flag = true;
        for(char c:s){
            arr[itr] += c;
            if(flag)
            itr++;
            else itr--;
            if(itr==nm){itr=nm-2;flag = false;}
            if(itr==-1){itr=1;flag = true;}
        }
        string ans;
        for(string req:arr){
            ans += req;
        }
        return ans;
    }
};