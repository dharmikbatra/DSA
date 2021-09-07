class Solution {
public:
    int findPeakElement(vector<int>& nm) {
        if(nm.size()==0){return -1;}
        if(nm.size()==1){return 0;}
        if(nm[nm.size()-1]>nm[nm.size()-2]){return nm.size()-1;}
        if(nm[0]>nm[1]){return 0;}
        int mid,l=0,h=nm.size()-1;
        while(l<=h){
            mid = (l+h)/2;
            if(mid-1>=0 && mid+1 < nm.size() && nm[mid]>nm[mid-1] && nm[mid]>nm[mid+1]){return mid;}
            if(mid-1>=0 && nm[mid]<nm[mid-1]){h = mid-1;}
            else{l = mid+1;}
        }
        return -1;
    }
};