class Solution {
public:
    string removeOccurrences(string s, string part) {
         int n = s.size();
        int m = part.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==part[0])
            {
                int index = i;
                int c =0;
                for(int j=0;j<m;j++,index++)
                {
                    if(s[index]==part[j])
                    {
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(c==m)
                {
                    s.erase(i,m);i=-1;//cout<<i<<s.size()<<endl;
                }
                
            }
        }
        return s;
        
    }
};