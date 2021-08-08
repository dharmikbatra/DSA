class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int arr[10],i,j,k;
        for(i=0;i<9;i++){
            memset(arr,0,sizeof(arr));
            for(j=0;j<9;j++){
                if(board[j][i]!='.')
                { arr[board[j][i]-48]++;
                if(arr[board[j][i]-48]>1){return false;}}
            }
        }
         for(i=0;i<9;i++){
            memset(arr,0,sizeof(arr));
            for(j=0;j<9;j++){
                if(board[i][j]!='.')
                {arr[board[i][j]-48]++;
                if(arr[board[i][j]-48]>1){return false;}}
            }
        }
        for(i=0;i<9;i+=3){
            for(j=0;j<9;j+=3){
                memset(arr,0,sizeof(arr));
                if(board[i][j]!='.')arr[board[i][j]-48]++;
                if(board[i+1][j]!='.')arr[board[i+1][j]-48]++;
                if(board[i+2][j]!='.')arr[board[i+2][j]-48]++;
                if(board[i][j+1]!='.')arr[board[i][j+1]-48]++;
                if(board[i+1][j+1]!='.')arr[board[i+1][j+1]-48]++;
                if(board[i+2][j+1]!='.')arr[board[i+2][j+1]-48]++;
                if(board[i][j+2]!='.')arr[board[i][j+2]-48]++;
                if(board[i+1][j+2]!='.')arr[board[i+1][j+2]-48]++;
                if(board[i+2][j+2]!='.')arr[board[i+2][j+2]-48]++;
                for(k=1;k<=9;k++){if(arr[k]>1){return false;}}                
            }
        }
        return true;
        
        
    }
};