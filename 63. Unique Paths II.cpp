class Solution {
public:
    int dfs(int i,int j,int m,int n,vector<vector<int>>&a,vector<vector<int>>&dp,int count){
        if(i>=m ||j>=n || a[i][j]==1)return 0;
        if(i==m-1 && j==n-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        //down
        count=dfs(i+1,j,m,n,a,dp,count);
        //right
        count+=dfs(i,j+1,m,n,a,dp,count);
        dp[i][j]=count;
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        // dfs+dp for time compl
        int m=a.size(),n=a[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int count=0;
        return dfs(0,0,m,n,a,dp,count);   
    }
};