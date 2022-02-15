class Solution {
public:
    int strStr(string h, string n) {
        if(n.length()==0){return 0;}
        if(h.length()<n.length()){return -1;}
        for(int i=0;i<h.length()-n.length()+1;i++){
            if(h[i]==n[0]){
                if(n == h.substr(i,n.length())){return i;}
            }
        }
        return -1;
    }
};