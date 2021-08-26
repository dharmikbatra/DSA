class Solution {
public:
    map<string, int> mp;
    int lcs(string &a,string &b,string &c,int na,int nb, int nc)
    {
        if(nc<0)
        {
            return 0;
        }
        string temp = to_string(na);
        temp += "_";
        temp += to_string(nb);
        temp += "_";
        temp += to_string(nc);
        auto itr = mp.find(temp);
        if(itr!=mp.end()){return itr->second;}
        if(nb>=0 && c[nc] == b[nb] && na>=0 && c[nc]==a[na]){
            return mp[temp]=1+max(lcs(a,b,c,na-1,nb,nc-1),lcs(a,b,c,na,nb-1,nc-1));
        }else if(nb >=0 && c[nc]==b[nb]){
            return mp[temp]=1+lcs(a,b,c,na,nb-1,nc-1);
        }else if(na >=0 && c[nc]==a[na]){
            return mp[temp]=1+lcs(a,b,c,na-1,nb,nc-1);
        }else{return INT_MIN;}
       
    }
    bool isInterleave(string s1, string s2, string s3) {
        int i;
        i = lcs(s1,s2,s3,s1.length()-1,s2.length()-1,s3.length()-1);
        if(i==s3.length() && s3.length()==(s1.length()+s2.length())){return true;}
        return false;
    }
};