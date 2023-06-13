#define ll long long int
const ll mod=1e9+7;
class Solution {
public:
    ll dfs(int s,int e,int k,vector<vector<ll>>&dp){
        if(k==0 && s==e){
            //count++;
            return 1;
        }
        if(k==0){
            // return ;
            return 0;
        }
        if(dp[s+1000][k]!=-1)return dp[s+1000][k];
        ll left=dfs(s-1,e,k-1,dp);
        ll right=dfs(s+1,e,k-1,dp);
        dp[s+1000][k]=left+right;
        return dp[s+1000][k]%mod;
    }
    int numberOfWays(int s, int e, int k) {
        //as number of ways->use DP
        //n+1,n-1
        //using count no of ways approach
        //make 2D dp one for position and one for steps(k)
        vector<vector<ll>>dp(3001,vector<ll>(1001,-1));
        ll ans=dfs(s,e,k,dp);
        return ans%mod;
    }
};