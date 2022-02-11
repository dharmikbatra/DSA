class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> sv1(26,0),sv2(26,0);
        if(s1.length()>s2.length()){return false;}
        int i,j;
        for(i=0;i<s1.length();i++){
            sv1[s1[i]-'a']++;
            sv2[s2[i]-'a']++;
        }
        if(sv1==sv2){return true;}
        i=0;j=s1.length();
        while(j<s2.length()){
            sv2[s2[i]-'a']--;
            sv2[s2[j]-'a']++;
            if(sv1==sv2){return true;}
            i++;j++;
        }
        return false;
    }
};