class Solution {
public:
    int removeElement(vector<int>& nm, int val) {
        vector<int> req;
        for(int i=0;i<nm.size();i++){
            if(nm[i]!=val){req.push_back(nm[i]);}
        }
        for(int i=0;i<req.size();i++){
            nm[i]=req[i];
        }
        return req.size();
    }
};