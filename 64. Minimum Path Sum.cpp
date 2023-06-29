class Solution {
public:
    //can make 3d dp but 2d wilol be AC as well :D
    int dp[201][201];
    int dfs(int i,int j,int n,int m,vector<vector<int>>& g){
        if(i==n-1 && j==m-1)return g[i][j];
        if(i>=n || j>=m)return 1e9;
        if(dp[i][j]!=-1)return dp[i][j];
        //ya toh down dega ya right calling min sum degi
        int down=g[i][j]+dfs(i+1,j,n,m,g);
        int right=g[i][j]+dfs(i,j+1,n,m,g);
        return dp[i][j]=min(down,right);
    }
    int minPathSum(vector<vector<int>>& g) {
        memset(dp,-1,sizeof(dp));
        int n=g.size(),m=g[0].size();
        return dfs(0,0,n,m,g);
    }
};