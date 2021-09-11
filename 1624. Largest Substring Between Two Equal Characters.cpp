class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
       vector<vector<int>> vec(26,vector<int>(2,-1));
        for(int i=0;i<s.length();i++){
            if(vec[s[i]-97][0]==-1){vec[s[i]-97][0]=i;}
            else{vec[s[i]-97][1]=i;}
        }
        int ans = INT_MIN;
        for(int i=0;i<26;i++){
            if(vec[i][0]!=-1 && vec[i][1]!=-1){
                if(ans < (vec[i][1]-vec[i][0])){ans = vec[i][1]-vec[i][0];}
            }
            
        }
        return ans==INT_MIN?-1:ans-1;
    }
};