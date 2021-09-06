class Solution {
public:
    int search(vector<int>& nm, int t) {
        int mid,pivot = nm.size()-1;
        int l = 0,h=nm.size()-1;
        while(l<=h){
            mid = (l+h)/2;
            if(nm[mid]==t){return mid;}
            if(mid+1<nm.size() && nm[mid]>nm[mid+1]){
                pivot = mid;
                break;
            }
            if(nm[mid]>=nm[l]){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        // cout<<pivot;
        l = 0;h = pivot;
        while(l<=h){
            mid = (l+h)/2;
            if(nm[mid]==t){return mid;}
            if(nm[mid]>t){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        l = pivot+1;h=nm.size()-1;
         while(l<=h){
            mid = (l+h)/2;
            if(nm[mid]==t){return mid;}
            if(nm[mid]>t){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return -1;
    }
};