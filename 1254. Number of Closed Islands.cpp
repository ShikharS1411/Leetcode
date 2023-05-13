class Solution {
public:
    void dfs2(int i,int j,int n,int m,vector<vector<int>>& a){
        if(i<0||j<0||i>=n||j>=m||a[i][j]==1)return;
        if(a[i][j]==0)a[i][j]=1;//visited
        //up
        dfs2(i-1,j,n,m,a);
        //down
        dfs2(i+1,j,n,m,a);
        //left
        dfs2(i,j-1,n,m,a);
        //right
        dfs2(i,j+1,n,m,a);
    }
    void dfs(int i,int j,int n,int m,vector<vector<int>>& a){
        if(i<0||j<0||i>=n||j>=m||a[i][j]==1)return;
        if(a[i][j]==0)a[i][j]=1;//visited
        //up
        dfs(i-1,j,n,m,a);
        //down
        dfs(i+1,j,n,m,a);
        //left
        dfs(i,j-1,n,m,a);
        //right
        dfs(i,j+1,n,m,a);
    }
    int closedIsland(vector<vector<int>>& a) {
        //island connected with the edges wont be included
        int n=a.size(),m=a[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||i==n-1||j==0||j==m-1) && a[i][j]==0)dfs(i,j,n,m,a);
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==0){
                    count++;
                    dfs2(i,j,n,m,a);
                }
            }
        }
        return count;
    }
};