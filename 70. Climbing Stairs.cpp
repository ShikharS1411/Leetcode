class Solution {
public:
    int dfs(int n,vector<int>&dp){
        if(n<=2)return n;
        if(dp[n]!=-1)return dp[n];
        dp[n]=dfs(n-1,dp)+dfs(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        //total no of distinct way->DP
        //top-down approach
        vector<int>dp(n+1,-1);
        return dfs(n,dp);
        
    }
};