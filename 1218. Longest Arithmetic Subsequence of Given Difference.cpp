/*
class Solution {
public:
    //will give tle o(n2) space comple.
    // int dp[100001][100001];
    int dfs(int ind,int prev,vector<int>& a, int k,vector<vector<int>>&dp){
        if(ind>=a.size())return 0;
        //do it prev+1 to eliminate its -ve val
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        //ya toh pick dega ya not _pick dega toh unka max le lo ez
        int pick=0;
        //pick comes with cond
        if(prev==-1 || a[ind]-a[prev]==k)pick=1+dfs(ind+1,ind,a,k,dp);
        //now not_pick the same element
        int not_pick=dfs(ind+1,prev,a,k,dp);
        dp[ind][prev+1]=max(pick,not_pick);
        return dp[ind][prev+1];
    }
    int longestSubsequence(vector<int>& a, int k) {
        //DP ez
        // memset(dp,-1,sizeof(dp));
        int n=a.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return dfs(0,-1,a,k,dp);
    }
};
*/
class Solution {
public:
    int longestSubsequence(vector<int>& a, int k) {
        map<int,int>mp;
        mp[a[0]]=1;
        int maxi=0;
        for(int i=1;i<a.size();i++){
            if(mp.find(a[i]-k)!=mp.end()){
                mp[a[i]]=1+mp[a[i]-k];
            }else{
                mp[a[i]]=1;
            }
            maxi=max(maxi,mp[a[i]]);
        }
        return maxi;
    }
};