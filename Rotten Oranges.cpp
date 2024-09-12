class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
       int m=grid.size();
       int n=grid[0].size();
       queue<pair<int,int>>q;
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               if (grid[i][j]==2){
                   q.push({i,j});
               }
           }
       }
       int mintime=-1;
       vector<int>row={0,0,1,-1};
       vector<int>col={1,-1,0,0};
       while(!q.empty()){
           mintime++;
           int sz=q.size();
           for(int k=0;k<sz;k++){
               int x=q.front().first;
               int y=q.front().second;
               q.pop();
               for(int i=0;i<4;i++){
                   int nrow= x+row[i];
                   int ncol=y+col[i];
                   if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1){
                       grid[nrow][ncol]=2;
                       q.push({nrow,ncol});
                   }
               }
           }
       }
       for (int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               if (grid[i][j]==1) return -1;
           }
       }
       return mintime ==-1 ? 0 :mintime;
    }
}; 