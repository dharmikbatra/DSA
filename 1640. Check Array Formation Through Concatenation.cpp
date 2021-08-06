class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int i,n=pieces.size(),j,n2;
        map<int,int>mp;
        for(i=0;i<n;i++){
            mp.insert({pieces[i][0],i});
        }
        n = arr.size();
        for(i=0;i<n;i++){
            auto itr = mp.find(arr[i]);
            if(itr==mp.end()){return 0;}
            else{
                n2 = pieces[itr->second].size();
                for(j=0;j<n2;j++){
                    if(arr[i]!=pieces[itr->second][j]){return 0;}
                    i++;
                }
            }
            i--;
        }
        return 1;
    }
};