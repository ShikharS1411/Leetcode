class Solution {
public:
    //can take a elemt no of time gotcha!!
    // dp[1e9][1e4];//this wont work ok #
    int dp[13][10001];
    int dfs(int ind,int n,vector<int>&a,int amount){
        // if(amount<0)return 0;
        if(ind==n-1){
            //ab aage lene ka mlt nai,joe elem le rkha ussi se check kro ki kitni baar lene pr (curr)amount =0 bn skta else 1e9 return ez
            if(amount%a[ind]==0)return amount/a[ind];//itni baar aur add krna 
            return 1e9;//will discard this path/subseq
        }
        if(dp[ind][amount]!=-1)return dp[ind][amount];
        int pick=1e9;
        //pick comes with a cond
        if(a[ind]<=amount){
            //as can pick any no of time
            pick=1+dfs(ind,n,a,amount-a[ind]);
        }
        int not_pick=dfs(ind+1,n,a,amount);
        return dp[ind][amount]=min(pick,not_pick);
    }
    int coinChange(vector<int>& a, int amount) {
        memset(dp,-1,sizeof(dp));
        // return -1;
        int n=a.size();
        // vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=dfs(0,n,a,amount);
        if(ans>=1e9)return -1;
        return ans;
    }
};