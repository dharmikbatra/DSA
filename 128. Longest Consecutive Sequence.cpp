class Solution {
public:
    int longestConsecutive(vector<int>& nm) {
        set<int> st;
        for(int x:nm){
            st.insert(x);
        }
        nm.clear();
        for(auto itr=st.begin();itr!=st.end();itr++){
            nm.push_back(*itr);
        }
       sort(nm.begin(),nm.end());
        if(nm.size()==1){return 1;}
        int lc=0, ans=INT_MIN;
        for(int i=1;i<nm.size();i++){
            lc=1;
           while(i<nm.size() && (nm[i]-nm[i-1]) == 1){lc++;i++;} 
            if(lc>ans){ans=lc;}
             if(lc==1){continue;}
            if(i!=nm.size()){i--;}
        }
        return ans==INT_MIN?0:ans;
    }
};