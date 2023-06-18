#define ll long long int
const ll mod=1e9+7;
class Solution {
public:
    ll dfs(int i,int j,int n,int m,vector<vector<int>>& g,vector<vector<ll>>& dp){
        if(dp[i][j]!=-1)return dp[i][j];
        int count=1;
        //up,down,left,right
        int dx[4]={-1,1,0,0};
        int dy[4] ={0,0,-1,1};
        for(int k=0;k<4;k++){
            int row=i+dx[k];
            int col=j+dy[k];
            if(row>=0 && row<n && col>=0 && col<m && g[i][j]<g[row][col]){
                count=(count%mod+dfs(row,col,n,m,g,dp)%mod)%mod;
            }
        }
        dp[i][j]=count;
        return count%mod;
    }
    int countPaths(vector<vector<int>>&g) {
         int n=g.size(),m=g[0].size();
        vector<vector<ll>>dp(n,vector<ll>(m,-1));
        ll count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //check for all i,j
                count=(count%mod+dfs(i,j,n,m,g,dp)%mod)%mod;
            }
        }
        return count;
    }
};