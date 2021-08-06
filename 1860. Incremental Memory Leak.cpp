class Solution {
public:
    vector<int> memLeak(int m1, int m2) {
        vector<int>ans;
        int i=1;
        while(m1>=0 || m2 >= 0){
            if(m1>=m2){
                m1 -= i;
                if(m1<0){m1+=i;break;}
            }
            else{
                m2 -= i;
                if(m2<0){m2+=i;break;}
            }
            i++;
        }
        ans.push_back(i);
        ans.push_back(m1);
        ans.push_back(m2);
        return ans;        
    }
};