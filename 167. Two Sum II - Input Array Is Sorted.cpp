class Solution {
public:
    int find(vector<int> &nm,int i, int j, int x){
        int mid,st,end;
        st = i;
        end = j;
        while(st<=end){
            mid = (st+end)/2;
            if(nm[mid]==x){return mid;}
            else if(nm[mid]>x){end = mid-1;}
            else{st = mid+1;}
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nm, int t) {
        int i=0,j=nm.size()-1,mid;
        for(int i=0;i<nm.size();i++){
            int x = nm[i];
            x = t-x;
            x = find(nm,i+1,j,x);
            if(x!=-1){
                return {i+1,x+1};
            }
        }        
        return {-1,-1};
    }
};