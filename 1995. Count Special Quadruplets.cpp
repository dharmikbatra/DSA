class Solution {
public:
    
    int countQuadruplets(vector<int>& nm) {
        multimap<int,int> mp;
        for(int i=0;i<nm.size();i++){
            mp.insert({nm[i],i});
        }
        int ans=0;
        for(int i=0;i<nm.size();i++){
            for(int j=i+1;j<nm.size();j++){
                for(int k=j+1;k<nm.size();k++){
                   int key = nm[i]+nm[j]+nm[k];
                    auto itr1 = mp.lower_bound(key);
                    auto itr2 = mp.upper_bound(key);
                    while(itr1!=itr2){
                        if(itr1->second != i && itr1->second != j && itr1->second != k && itr1->second>k){ans++;}
                        itr1++;
                    }
                }
            }
        }
        return ans;
    }
};