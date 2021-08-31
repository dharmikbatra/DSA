class Solution {
public:
    bool wordBreak(string s, vector<string>& wD) {
        int i,j;
        vector<int> arr(s.size()+1,0);
        unordered_set<string> st;
        for(i=0;i<wD.size();i++){
            st.insert(wD[i]);
        }
        arr[0]=1;
        for(i=1;i<=s.size();i++){
            j = i-1;
            while(j>=0){
                auto itr = st.find(s.substr(j,i-j));
                if(itr!=st.end()){
                    arr[i] += arr[j];
                    if(arr[i]>s.length()){arr[i]=1;}
                }
                j--;
            }
        }
        return arr[s.size()]!=0;
    }
};