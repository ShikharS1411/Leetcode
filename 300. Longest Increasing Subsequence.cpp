class Solution {
public:

    int dfs(int ind,int prev,vector<int>&a,int n,vector<vector<int>>&dp){
        if(ind==n)return 0;
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        int pick=0;
        if(prev==-1 || a[ind]>a[prev]){
            //as cond satisfyu ho gyi toh sure h 1+ toh hoga hi toh direct add kr do
            pick=1+dfs(ind+1,ind,a,n,dp);
        }
        int not_pick=dfs(ind+1,prev,a,n,dp);
        return dp[ind][prev+1]=max(pick,not_pick);
    }

    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        //to store ind and prev
        vector<vector<int>>dp(2501,vector<int>(2501,-1));
        return dfs(0,-1,a,n,dp);
    }
};