class Solution {
public:
bool dfs(vector<vector<char>>& board, vector<vector<int>>&vis,string word,int delRow[],int delCol[],int row,int col,int idx){
    if (idx==word.size()) return true;
    vis[row][col]=1;
    int n=board.size();
    int m=board[0].size();
    if (idx==word.size()) return true;
    for(int i=0;i<4;i++){
        int nrow=row+delRow[i];
        int ncol=col+delCol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]==word[idx]){
            if (dfs(board,vis,word,delRow,delCol,nrow,ncol,idx+1))   return true;
        }
    }
        vis[row][col]=0;
        return false;
    
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && dfs(board,vis,word,delRow,delCol,i,j,1)){
                    return true;
                }
            }
        }
        return false;
    }
};