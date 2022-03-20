class Solution {
public:
    double findMedianSortedArrays(vector<int>& nm1, vector<int>& nm2) {
        vector<int> req;
        int i=0,j=0;
        while(i<nm1.size() && j<nm2.size()){
            if(nm1[i]<nm2[j]){
                req.push_back(nm1[i++]);
            }else{
                req.push_back(nm2[j++]);
            }
        }
        while(i<nm1.size()){req.push_back(nm1[i++]);}
        while(j<nm2.size()){req.push_back(nm2[j++]);}
        if(req.size()%2 == 0){
            return (float)(req[req.size()/2]+req[req.size()/2 -1])/2.00;
        }else{
            return (float)req[req.size()/2];
        }

    }
};