class Solution {
public:
    int dfs(int ind,int n,vector<int>&a,vector<int>&dp){
        if(ind>n)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int pick=a[ind]+dfs(ind+2,n,a,dp);
        int not_pick=dfs(ind+1,n,a,dp);
        dp[ind]=max(pick,not_pick);
        return dp[ind];
    }
    int rob(vector<int>& a) {
        vector<int>dp(101,-1);
        int n=a.size();
        //edge case bruh
        if(n==1)return a.front();
        int inc_first=dfs(0,n-2,a,dp);
        for(auto &x:dp)x=-1;
        int inc_last=dfs(1,n-1,a,dp);
        return max(inc_first,inc_last);
    }
};