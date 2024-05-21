class Solution {
public:
    int dp[501][501];
    int dfs(int i,int j,string s,string t){
        if(i==s.size() || j==t.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j])return dp[i][j]=1+dfs(i+1,j+1,s,t);
        return dp[i][j]=max(dfs(i+1,j,s,t),dfs(i,j+1,s,t));
    }
    int minDistance(string s, string t) {
        //t.size()-lcs
        memset(dp,-1,sizeof(dp));
        return s.size()+t.size()-2*dfs(0,0,s,t);
    }
};