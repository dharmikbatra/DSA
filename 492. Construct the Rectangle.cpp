class Solution {
public:
    vector<int> constructRectangle(int area) {
        float x = sqrt(area);
        int y = x;
        float k = x-y;
         vector<int> ans;
        if(k==0){
            ans.push_back(y);
            ans.push_back(y);
            return ans;
        }else{
            int mina,minb,mindiff=INT_MAX;
            for(int i=1,j=area;i<=y;){
                if(i*j==area){
                    if(j-i<mindiff){
                        mindiff=j-i;
                        mina=i;
                        minb=j;
                    }
                    i++;j--;
                }
                else if(i*j<area){i++;}
                else {j--;}
            }
            ans.push_back(minb);
            ans.push_back(mina);
            return ans;
        }
    }
};