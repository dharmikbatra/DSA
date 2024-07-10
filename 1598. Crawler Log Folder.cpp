class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for(string s:logs){
            if(s[0]=='.'){
                if(s[1] == '.'){
                    if(ans > 0){ans--;}
                }
            }else{
                ans++;
            }
        }
        return ans;
        
    }
};