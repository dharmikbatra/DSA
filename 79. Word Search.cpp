class Solution {
public:
    bool solve(vector<vector<char>> &b,string &word,int ind,int i,int j,vector<vector<bool>> &vis){
        if(ind==word.length()-1)return true;
        vis[i][j]=true;
        if(i>0 && !vis[i-1][j] && b[i-1][j] == word[ind+1] && solve(b,word,ind+1,i-1,j,vis) )return true;
        if(j>0 && !vis[i][j-1] && b[i][j-1] == word[ind+1] && solve(b,word,ind+1,i,j-1,vis) )return true;
        if(i<b.size()-1 && !vis[i+1][j] && b[i+1][j] == word[ind+1] && solve(b,word,ind+1,i+1,j,vis) )return true;
        if(j<b[0].size()-1 && !vis[i][j+1] && b[i][j+1] == word[ind+1] && solve(b,word,ind+1,i,j+1,vis) )return true;
        
        vis[i][j] = false;
        return false;
    }
    bool exist(vector<vector<char>>& b, string word) {
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                vector<vector<bool>>vis(b.size(),vector<bool>(b[0].size(),false));
                if(b[i][j]==word[0] && solve(b,word,0,i,j,vis))return true;
            }
        }
        return false;
    }
};