class Solution {
public:
    int dfs(vector<int>& a,int n,vector<int>&dp){
        if(n<=1)return 0;
        if(n==2)return min(a[0],a[1]);
        if(dp[n]!=-1)return dp[n];
        return dp[n]=min(dfs(a,n-1,dp)+a[n-1],dfs(a,n-2,dp)+a[n-2]);
    }
    int minCostClimbingStairs(vector<int>& a) {
        int n=a.size();
        //want to reach->n+1
        //using top down approach
        vector<int>dp(n+1,-1);
        return dfs(a,n,dp);
    }
};