class Solution {
public:
    int maxPower(string s) {
        int ans = INT_MIN,i,sum;
        char c;
        for(i=0;i<s.length();i++){
            c = s[i];
            sum=0;
            while(i<s.length() && s[i]==c){
                i++;
                sum++;
            }
            if(i!=s.length()){i--;}
            if(sum>ans){ans=sum;}
        }
        return ans;
        
    }
};