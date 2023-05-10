class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<int>>& a){
        if(i<0||j<0||i>=n||j>=m||a[i][j]==0)return;
        if(a[i][j]==1)a[i][j]=0;
        //up
        dfs(i-1,j,n,m,a);
        //down
        dfs(i+1,j,n,m,a);
        //left
        dfs(i,j-1,n,m,a);
        //right
        dfs(i,j+1,n,m,a);
    }
    int numEnclaves(vector<vector<int>>& a) {
        //arey ez sa hi toh h hauuu
        int n=a.size(),m=a[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1 && (i==0||i==n-1||j==0||j==m-1))dfs(i,j,n,m,a);
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1)count++;
            }
        }
        return count;
    }
};