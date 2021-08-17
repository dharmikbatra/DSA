class Solution {
public: 
bool is_valid(vector<vector<char>> &A,int row,int col,char x)
{
    for(int i=0;i<9;i++)
    {
        if(A[i][col]==x)
        {
            return false;
        }
    }
    for(int i=0;i<9;i++)
    {
        if(A[row][i]==x)
        {
            return false;
        }
    }
    int curr_row=(row/3)*3,curr_col=(col/3)*3;
    for(int i=curr_row;i<curr_row+3;i++)
    {
        for(int j=curr_col;j<curr_col+3;j++)
        {
            if(A[i][j]==x)
            {
                return false;
            }
        }
    }
    return true;
}
vector<vector<char>> ans;
void solve(vector<vector<char>> &a,int i,int j){
    if(i==a.size()){
        ans = a;
        return;
    }
    int ni,nj;
    if(j==a[0].size()-1){
        ni = i+1;
        nj=0;
    }else{
        ni=i;
        nj=j+1;
    }
    
    if(a[i][j]!='.'){
        solve(a,ni,nj);
    }else{
       for(char x='1';x<='9';x++)
       {
           if(is_valid(a,i,j,x))
            {
               a[i][j]=x;
               solve(a,ni,nj);
               a[i][j]='.';
            }
        } 
    }
}
    void solveSudoku(vector<vector<char>>& A) {
        solve(A,0,0);
         A=ans;
    }
};


