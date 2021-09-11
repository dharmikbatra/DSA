class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = INT_MIN,k,i=0,j=h.size()-1;
        while(i<j){
            k = (j-i)*min(h[i],h[j]);
            if(k>ans){ans=k;}
           if(h[i]<h[j]){i++;}
            else{j--;}
        }
        return ans;
    }
};