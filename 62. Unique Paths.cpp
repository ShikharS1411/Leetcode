class Solution {
public:
    int dfs(int i,int j,int m,int n,vector<vector<int>>&dp,int count){
        if(i>=m ||j>=n)return 0;
        if(i==m-1 && j==n-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        //down
        count=dfs(i+1,j,m,n,dp,count);
        //right
        count+=dfs(i,j+1,m,n,dp,count);
        dp[i][j]=count;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        // dfs+dp for time compl
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int count=0;
        return dfs(0,0,m,n,dp,count);
    }
};