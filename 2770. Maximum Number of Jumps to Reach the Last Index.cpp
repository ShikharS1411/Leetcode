class Solution {
public:
    int dfs(int ind,int n,vector<int>& a, int k,vector<int>&dp){
        if(ind>=n)return INT_MIN;
        if(ind==n-1)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int pick=INT_MIN;
        for(int i=ind+1;i<n;i++){
            if(abs(a[i]-a[ind])<=k)pick=max(pick,1+dfs(i,n,a,k,dp));
        }
        dp[ind]=pick;
        return dp[ind];
    }
    int maximumJumps(vector<int>& a, int k) {
        vector<int>dp(1001,-1);
        int n=a.size();
        int ans=dfs(0,n,a,k,dp);
        if(ans<0)return -1;
        return ans;
    }
};