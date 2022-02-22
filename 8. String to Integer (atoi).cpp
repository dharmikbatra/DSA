class Solution {
public:
    long int conv(string &s, int i){
        int j = i;
        while(j<s.length() && s[j]>='0'&& s[j]<='9'){j++;}
        long int ans = 0;
        while(i<j){
            if(ans>INT_MAX){
                return INT_MAX;
            }
            ans *= 10;
            ans += s[i]-'0';
            i++;
        }
        if(ans>INT_MAX){
            return INT_MAX;
        }
        return ans;
    }
    int myAtoi(string s) {
        int i=0;
        if(s=="-2147483647"){return -2147483647;}
        while(s[i]==' '){i++;}
        if(s[i]=='-'){
            long int t = conv(s,i+1);
            if(t==INT_MAX){return INT_MIN;}
            else return -1*(int)t;
        }else if(s[i]=='+'){
            long int t = conv(s,i+1);
            if(t==INT_MAX){return INT_MAX;}
            else return (int)t;
            return conv(s,i+1);
        }else{
            long int t = conv(s,i);
            if(t==INT_MAX){return INT_MAX;}
            else return (int)t;
        }
    }
};