class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nm) {
        vector<int> arr(nm.size(),0);
        for(int i=2;i<nm.size();i++){
            if((nm[i]-nm[i-1]) == (nm[i-1]-nm[i-2])){
                if(arr[i-1]==0){arr[i]=1;}
                else{arr[i]=1+arr[i-1];}
            }
        }
        int ans=0;
        for(int i=2;i<nm.size();i++){
            ans += arr[i];
        }
        return ans;
    }
};