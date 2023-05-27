class Solution {
public:
    void dfs(vector<vector<int>>& grid1,vector<vector<int>>& grid2, int i, int j, int n,int m,bool& flag){
        if(i<0||i>=n||j<0||j>=m||grid2[i][j]==0)return;
        if(grid1[i][j]==0)flag=false;//at every step check this if 1 is present on grid 1 or not,if not then it cant be a sub island 
        //visited
        if(grid2[i][j]==1)grid2[i][j]=0;
        //up
        dfs(grid1,grid2,i-1,j,n,m,flag);
        //down
        dfs(grid1,grid2,i+1,j,n,m,flag);
        //left
        dfs(grid1,grid2,i,j-1,n,m,flag);
        //right
        dfs(grid1,grid2,i,j+1,n,m,flag);
    }
    int countSubIslands(vector<vector<int>>& grid1,vector<vector<int>>& grid2){
        int n=grid1.size();
        int m=grid1[0].size();
        int count=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid2[i][j]==1) {
                    bool flag=true;
                    dfs(grid1,grid2,i,j,n,m,flag);
                    if(flag)count++;
                }
            }
        }
        return count;
    }
};