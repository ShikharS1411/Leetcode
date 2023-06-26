#define lld   long double
class Solution {
public:
    lld dfs(int i,int j,int m,int n,int k,vector<vector<vector<lld>>>&dp){
        if(k==0)return 1;//yha ruk jna    
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        int drow[8]={-2,-1,1,2,2,1,-1,-2};
        int dcol[8]={1,2,2,1,-1,-2,-2,-1};
        lld ans=0;
        for(int ind=0;ind<8;ind++){
            int row=i+drow[ind];
            int col=j+dcol[ind];
            if(row>=0 && col>=0 && row<n && col<n){
            ans+=dfs(row,col,m,n,k-1,dp);
            }
        }
        return dp[i][j][k] = ans/8.0;
    }
    double knightProbability(int n, int k, int r, int c) {
        vector<vector<vector<lld>>>dp(n,vector<vector<lld>>(n,vector<lld>(k+1,-1)));
        return dfs(r,c,n,n,k,dp);
    }
};