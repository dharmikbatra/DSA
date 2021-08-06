class Solution {
public:
    int getLucky(string s, int k) {
       int n = s.size();
        string num = "";
        for(int i=0;i<n;i++)
        {
            int t = s[i]-'a'+1;
            string st = to_string(t);
            num+=st;
        }
        int t;
        while(k--)
        {
            string temp = num;
            n = temp.size();
            t=0;
            for(int i=0;i<n;i++)
            {
                t+=temp[i]-'0';
            }
            num = to_string(t);
   
}
        return t;
    }
};