class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
          int c=0;
        int n = s1.size();
        int i1=INT_MIN,i2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                if(i1==INT_MIN){ i1 =i;}
                else{ i2=i;}
                c++;
            }
        }
        if(c==0)
        {
            return true;
        }
        if(c==2)
        {
            if(s1[i1]==s2[i2] && s1[i2]==s2[i1])
            {
                return true;
            }
        }
        return false;
        
    }
};