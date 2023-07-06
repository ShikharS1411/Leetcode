class Solution {
public:
    int dfs(string& s,string& t,int i,int j,vector<vector<int>>&dp){
        if(i<0||j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j]){
            int match=1+dfs(s,t,i-1,j-1,dp);
            dp[i][j]=match;
            return dp[i][j];
        }
        int left=0+dfs(s,t,i-1,j,dp);
        int right=0+dfs(s,t,i,j-1,dp);
        int not_match=max(left,right);
        dp[i][j]=not_match;
        return dp[i][j]; 
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        //now find longest comm subs
        int n=s.size(),m=t.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return dfs(s,t,n-1,m-1,dp);
    }
};