class Solution {
public:
    int dfs(int n,vector<int>&dp){
        if(n<=0)return 0;
        if(dp[n]!=-1)return dp[n];
        int mini=1e9;
        for(int i=1;i*i<=n;i++){
            int count=1+dfs(n-i*i,dp);
            mini=min(mini,count);
        }
        dp[n]=mini;
        return dp[n];
    }
    int numSquares(int n) {
        //cant do it in greedy way as always reducing largest will give least ans,also binary search is way more complicated here 
        //thus going with dp and checking for every dmn perf.sq and outputting the least count ez huehue
        //and we can conclude that there exists a possible ans for every perf.sq taken as 1 will compensate
        vector<int>dp(1e4+1,-1);
        int ans=dfs(n,dp);
        return ans;
    }
};