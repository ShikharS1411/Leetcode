/*
class Solution {
public:
    int dfs(int i,int j,int m,int n,vector<vector<int>>&a,vector<vector<int>>&dp,int count){
        if( i<0 || j<0 || i>=m ||j>=n || a[i][j]==-1)return 0;
        if(a[i][j]==2)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        //up
        count=dfs(i-1,j,m,n,a,dp,count);
        //down
        count+=dfs(i+1,j,m,n,a,dp,count);
        //left
        count+=dfs(i,j-1,m,n,a,dp,count);
        //right
        count+=dfs(i,j+1,m,n,a,dp,count);
        dp[i][j]=count;
        return dp[i][j];
    }
    int uniquePathsIII(vector<vector<int>>& a) {
        int m=a.size(),n=a[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==1)return dfs(i,j,m,n,a,dp,count);  
            }
        }
        return -1;
    }
};
*/
//DFS
class Solution {
public:
int delrow[4]={1,0,-1,0};
int delcol[4]={0,1,0,-1};
int ans=0;
void dfs(int row,int col,vector<vector<int>>visited,vector<vector<int>>&grid,int empty)
{
    int n=grid.size();
    int m=grid[0].size();
    visited[row][col]=1;
    if(grid[row][col]==-1){
        return ;
    }
    if(grid[row][col]==2)
    {
        if(empty==0) // the path length is equal to total emty squares
        {
            ans++;
        }
        return;
    }
    for(int i=0;i<4;i++)
    {
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && !visited[nrow][ncol])
        {
            //count++;
            dfs(nrow,ncol,visited,grid,empty-1);
        }
    }
    visited[row][col]=0;
}
    int uniquePathsIII(vector<vector<int>>& grid) {
        int startx,starty;
        int empty=1;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
              if(grid[i][j]==1)
              {
                  startx=i;
                  starty=j;
              }
              if(grid[i][j]==0)
                  empty++;
            }
        }
        // now applying the dfs algo to calculate the total paths
        vector<vector<int>>visited(n,vector<int>(m,0));
        dfs(startx,starty,visited,grid,empty);
        return ans;
    }
};
