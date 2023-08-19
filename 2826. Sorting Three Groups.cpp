#define pb push_back
#define se second
class Solution {
public:
    int dfs(int ind,int prev,vector<int>&a,int n,vector<vector<int>>&dp){
        //simple lis
        if(ind==n)return 0;
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        int pick=0;
        if(prev==-1 || a[ind]>a[prev]){
            //as cond satisfy ho gyi toh sure h 1+ toh hoga hi toh direct add kr do
            pick=1+dfs(ind+1,ind,a,n,dp);
        }
        int not_pick=dfs(ind+1,prev,a,n,dp);
        return dp[ind][prev+1]=max(pick,not_pick);
    }

    int minimumOperations(vector<int>& a) {
        int n=a.size();
        vector<int>temp;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            vp.pb({a[i],i});
        }
        sort(vp.begin(),vp.end());
        for(auto x:vp)temp.pb(x.se);
        //to store ind and prev
        vector<vector<int>>dp(101,vector<int>(101,-1));
        return n-dfs(0,-1,temp,n,dp);
    }
};