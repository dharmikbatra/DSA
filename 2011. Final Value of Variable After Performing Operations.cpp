class Solution {
public:
    int finalValueAfterOperations(vector<string>& ops) {
        int ans=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i][1]=='+'){ans+=1;}
            else{
                ans-=1;
            }
        }
        return ans;
        
    }
};