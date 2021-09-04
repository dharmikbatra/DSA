class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int c = 0,ct=0;
        for(int i=0;i<b.size();i++){
            if(b[i]==5){c++;}
            else if(b[i]==10){
                if(c==0){return false;}
                c--;
                ct++;
            }else{
                if(ct>0 && c>0){ct--;c--;continue;}
                if(ct==0 && c>2){c -= 3;continue;}
                return false;
            }
        }
        return true;
    }
};