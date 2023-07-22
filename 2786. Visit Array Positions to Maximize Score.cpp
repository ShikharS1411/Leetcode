#define ll long long int
/*
class Solution {
public:
    // ll dp[100001];
    ll dfs(int ind,int n,vector<int>& a,int x,vector<ll>&dp){
        if(ind>=n)return 0;
        if(dp[ind]!=-1)return dp[ind];
        ll pick=-1e9;
        if((ind&1 && (ind+1)&1 ) ||(ind%2==0 && (ind+1)%2==0))pick=a[ind]+dfs(ind+1,n,a,x,dp);
        else {
            pick=a[ind]-x+dfs(ind+1,n,a,x,dp);
        }
        ll not_pick=dfs(ind+1,n,a,x,dp);
        dp[ind]=max(pick,not_pick);
        return dp[ind];
    }
    long long maxScore(vector<int>& a, int x) {
        //dp bro
        int n=a.size();
        vector<ll>dp(n+1,-1);
        return dfs(0,n,a,x,dp);
    }
};
*/
class Solution {
public:
    long long fun(vector<int> &nums, int &x, int ind, bool odd, vector<vector<long long>> &dp){
        if(ind==nums.size())
            return 0;
        if(dp[ind][odd]!=-1)
            return dp[ind][odd];
        long long take = 0, nontake = 0;
        nontake = fun(nums, x, ind+1, odd, dp);
        if(odd){
            if(nums[ind]&1) take = nums[ind] + fun(nums, x, ind+1, true, dp);
            else take = nums[ind]-x + fun(nums, x, ind+1, false, dp);
        } else {
            if(nums[ind]&1) take = nums[ind]-x + fun(nums, x, ind+1, true, dp);
            else take = nums[ind] + fun(nums, x, ind+1, false, dp);
        }
        return dp[ind][odd] = max(take, nontake);
    }
    long long maxScore(vector<int>& nums, int x) {
        vector<vector<long long>> dp(nums.size(), vector<long long>(2, -1));
        return nums.front() + fun(nums, x, 1, nums.front()&1, dp);
    }
};