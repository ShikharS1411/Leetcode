#define ll long long int
const ll mod=1e9+7;
class Solution {
public:
    int dfs(vector<int>& l,int s,int e,int fuel,int n,vector<vector<int>>&dp){
        if(fuel<0)return 0;
        // if(s==e)return 1;
        if(dp[s][fuel]!=-1)return dp[s][fuel];
        int count=0;
        if(s==e && fuel>=0)count=1;
        for(int i=0;i<n;i++){
            if(i!=s){
                //           pick loc,not pick loc->no need loop will handle
                int rem_fuel=fuel-abs(l[s]-l[i]);
                count=(count+dfs(l,i,e,rem_fuel,n,dp))%mod;
            }
        }
        return dp[s][fuel]=count;
    }
    int countRoutes(vector<int>& l, int s, int e, int fuel) {
        int n=l.size();
        vector<vector<int>>dp(101,vector<int>(201,-1));
        return dfs(l,s,e,fuel,n,dp);
    }
};