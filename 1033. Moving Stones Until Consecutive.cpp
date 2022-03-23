class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> ve = {a,b,c};
        sort(ve.begin(),ve.end());
        int count = 0;
        int c1=0,c2=0;
        if(ve[0]+1!=ve[1])
            c1++;
        if(ve[1]+1!=ve[2])
            c1++;
        if(c1==2){
            if(ve[1]-ve[0] == 2 || ve[2]-ve[1] == 2){c1=1;}
        }
        c2+=ve[2]-ve[1]-1;
        c2+=ve[1]-ve[0]-1;
        return {c1,c2};
    }
};