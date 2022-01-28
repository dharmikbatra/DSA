class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.length()-1;
        while(i>=0){
            if(num[i]=='1' || num[i]=='3' || num[i]=='5' || num[i]=='7' || num[i]=='9' ){break;}
            i--;
        }
        if(i==-1){return "";}
        string ans= num.substr(0,i+1);
        return ans;
    }
};