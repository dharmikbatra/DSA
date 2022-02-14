class Solution {
public:
    int searchInsert(vector<int>& nm, int t) {
        int s=0,e=nm.size()-1,mid;
        while(s<=e){
            mid = (s+e)/2;
            if(nm[mid]==t){return mid;}
            else if(nm[mid]>t){
                e = mid -1;
            }else{
                s = mid+1;
            }
        }
        while(mid<nm.size() && nm[mid]<t){mid++;}
        return mid;
    }
};