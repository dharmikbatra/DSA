class Solution {
public:
    string defangIPaddr(string ad) {
        string ans="";
        for(int i=0;i<ad.length();i++){
            if(ad[i]=='.'){
                ans = ans + "[.]";
            }else{
                ans = ans + ad[i];
            }
        }
        return ans;
    }
};