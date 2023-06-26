#define ll long long int
const ll mod =1e9+7;
class Solution {
public:
    int dfs(vector<vector<int>>& a, int i,int j,int n,int m,ll sum,int k,vector<vector<vector<int>>> &dp){
        if(i>=n||j>=m)return 0;
        if(i==n-1 && j==m-1 && (sum+a[i][j])%k==0)return 1;
        if(dp[i][j][sum%k]!=-1)return dp[i][j][sum%k];
        //down
        int down=dfs(a,i+1,j,n,m,sum+a[i][j],k,dp);
        //righta
        int right=dfs(a,i,j+1,n,m,sum+a[i][j],k,dp);
        return dp[i][j][sum%k]=(down+right)%mod;
    }
    int numberOfPaths(vector<vector<int>>& a, int k) {
        int n=a.size(),m=a[0].size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(m+1,vector<int>(k,-1)));
        return dfs(a,0,0,n,m,0,k,dp)%mod;
    }
};