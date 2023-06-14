class Solution {
public:
    int dfs(int ind,vector<int>&a,vector<int>&dp){
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int pick=a[ind]+dfs(ind-2,a,dp);
        int not_pick=dfs(ind-1,a,dp);
        dp[ind]=max(pick,not_pick);
        return dp[ind];
    }
    int rob(vector<int>& a) {
        //have to pick and choose->DP
        vector<int>dp(101,-1);
        int n=a.size();
        int max_val=dfs(n-1,a,dp);
        return max_val;
    }
};