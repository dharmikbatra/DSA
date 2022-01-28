bool comp(string s1, string s2){
    int i=0;
    string s = s1+s2;
    s1 = s2+s1;
    while(i< s.length()){
        if(s[i]==s1[i]){i++;continue;}
        else if(s[i]>s1[i]){return true;}
        else return false;
    }
    return false;
}
class Solution {
public:
    string conv(int &n){
        string ans="";
        while(n){
            ans = (char)(n%10 + '0') + ans;
            n /= 10; 
        }
        if(ans==""){return "0";}
        return ans;
    }
    string largestNumber(vector<int>& A) {
        vector <string> req;
        for(int num:A){
            req.push_back(conv(num));
        }
        sort(req.begin(),req.end(),comp);
        string ans="";
        for(string s:req){
            ans += s;
        }
        int flag=0;
        for(char c:ans){if(c=='0'){continue;}else{flag=1;}}
        if(ans=="" || flag==0){return "0";}
        return ans;
    }
};