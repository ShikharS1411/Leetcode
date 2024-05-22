//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
  int dp[1000001];
    int dfs(int n){
        if(n<0)return 1e9;
        if (n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int pick=1e9,not_pick=1e9;
        if(n%2==0)pick=1+dfs(n/2);
        // int not_pick=1+dfs(n-1);
        else not_pick=1+dfs(n-1);
        
        return dp[n]=min(pick,not_pick);
    }
    int minOperation(int n)
    {
        memset(dp,-1,sizeof(dp));
        return dfs(n);
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}