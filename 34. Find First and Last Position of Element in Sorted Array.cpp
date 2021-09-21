class Solution {
public:
    vector<int> searchRange(vector<int>& nm, int t) {
        int fo=1 ,lo=0 ;
        int l=0,h=nm.size()-1,mid=0;
        while(l<=h){
            mid = (l+h)/2;
            if(nm[mid]>=t){h = mid-1;}
            else if(nm[mid]<t){l=mid+1;}
        }
        if(mid<nm.size() && nm[mid]==t){fo = mid;}
        else {fo = mid+1;}
        l=0;h=nm.size()-1;mid=0;
        while(l<=h){
            mid = (l+h)/2;
            if(nm[mid]>t){h = mid-1;}
            else if(nm[mid]<=t){l=mid+1;}
        }
        if(mid<nm.size() && nm[mid]==t){lo = mid;}
        else {lo = mid-1;}
        if(fo>lo){return {-1,-1};}
        return {fo,lo};
    }
};