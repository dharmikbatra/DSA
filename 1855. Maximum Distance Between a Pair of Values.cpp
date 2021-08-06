class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i,st,end,mid,n1=nums1.size(),n2=nums2.size(),max=INT_MIN,k;
        for(i=0;i<n1;i++){
            st=i;end=n2-1;
            while(st<=end){
                mid = (st+end)/2;
                if(nums2[mid]==nums1[i]){break;}
                else if(nums2[mid]>nums1[i]){st=mid+1;}
                else {end = mid-1;}
            }
            k = nums2[mid];
            if(k==nums1[i]){
                while( mid<n2 && k==nums2[mid]){mid++;}
                if(mid-i-1>max){max=mid-i-1;}
            }else {
                if(k>nums1[i]){
                    if(mid-i>0){
                        if(mid-i>max){max=mid-i;}
                    }             
                }else{
                    if(mid-i-1>0){
                        if(mid-i-1>max){max=mid-i-1;}
                    }             
                }   
            }
        }
        if(max <= 0){return 0;}
        return max;
    }
    
};