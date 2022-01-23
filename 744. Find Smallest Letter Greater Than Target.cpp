class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        for(int i=0;i<l.size();i++){
            if(l[i]>t){return l[i];}
        }
        return l[0];
    }
};
