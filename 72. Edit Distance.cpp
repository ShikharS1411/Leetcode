class Solution {
public:
    int dp[501][501];
    int dfs(int i,int j,int n,int m,string &s,string &t){
        if(i==n && j==m)return 0;
        if(i==n)return m-j;
        if(j==m)return n-i;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=1e9;
        if(s[i]==t[j])ans=0+dfs(i+1,j+1,n,m,s,t);
        //do all 3 oper and take min if !=
        else ans=1+min({dfs(i+1,j,n,m,s,t),dfs(i,j+1,n,m,s,t),dfs(i+1,j+1,n,m,s,t)});
        return dp[i][j]=ans;
        
    }
    int minDistance(string s, string t) {
        //ez4ence
        memset(dp,-1,sizeof(dp));
        return dfs(0,0,s.size(),t.size(),s,t);
    }
};