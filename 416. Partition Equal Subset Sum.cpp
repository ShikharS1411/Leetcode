class Solution {
public:
    bool dfs(vector<int>& a,int ind,int sum,int n,vector<vector<int>>&dp){
        if(ind==n||sum<0)return 0;
        if(sum==0)return 1;
        if(dp[ind][sum] != -1)return dp[ind][sum];
        bool pick=dfs(a,ind+1,sum-a[ind],n,dp);
        bool not_pick=dfs(a,ind+1,sum,n,dp);
        dp[ind][sum]= pick || not_pick;
        return dp[ind][sum];
    }
    bool canPartition(vector<int>& a) {
        int total=0;
        int n=a.size();
        for(auto x:a)total+=x;
        if(total&1)return false;
        int sum=total/2;
        vector<vector<int>>dp(n,vector<int>(total+1,-1));
        return dfs(a,0,sum,n,dp);
    }
};