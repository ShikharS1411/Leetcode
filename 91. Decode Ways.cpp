class Solution {
public:
    int dfs(int pos,int n,string s,vector<int>&dp){
        if(pos==n)return 1;//for counting
        if(s[pos]=='0')return 0;
        if(dp[pos]!=-1)return dp[pos];
        int count=dfs(pos+1,n,s,dp);
        if(pos<n-1 && s.substr(pos,2)<="26"){
            count+=dfs(pos+2,n,s,dp);
            //can do left +right but need to declare right as global var
        }
        // dp[pos]=left+right;
        dp[pos]=count;
        return dp[pos];
    }
    int numDecodings(string s) {
        //as no of ways->dp
        vector<int>dp(101,-1);
        int n=s.size();
        int ans=dfs(0,n,s,dp);
        return ans;
    }
};