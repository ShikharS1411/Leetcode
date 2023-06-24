class Solution {
public:
    int dfs(int ind,int sum,int n,vector<int>& a,vector<vector<int>> &dp){
        if(ind==n){
            if(sum==0)return 0;
            return INT_MIN;
        }
        if(dp[ind][sum+5000]!=-1)return dp[ind][sum+5000];
        int m1=a[ind]+dfs(ind+1,sum+a[ind],n,a,dp);
        int m2=dfs(ind+1,sum-a[ind],n,a,dp);
        int m3=dfs(ind+1,sum,n,a,dp);
        return dp[ind][sum+5000]=max(m1,max(m2,m3));
    }
    int tallestBillboard(vector<int>& a) {
        int n=a.size();
        vector<vector<int>> dp(n,vector<int>(10001,-1));
        return dfs(0,0,n,a,dp);
    }
};