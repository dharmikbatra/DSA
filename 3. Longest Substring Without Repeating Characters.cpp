class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,max=INT_MIN,sum=0;
        int ar[128] = {0};
        for(i=0;i<s.length();i++){
            ar[s[i]]++;
            if(ar[s[i]]>1){
                memset(ar,0,sizeof(ar));
                if(sum>max){max=sum;}
                i -= sum;
                sum=0;
            }else{
                sum++;
            }
        }
        if(sum>max){max=sum;}
        return max;
        
    }
};