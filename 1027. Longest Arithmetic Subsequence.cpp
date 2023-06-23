class Solution {
public:
    int longestArithSeqLength(vector<int>& a) {
        int ans = 0;
        vector<vector<int>> dp(1001,vector<int>(1001,0));
        for(int i=0;i<a.size();i++){
            for(int j=i-1;j>=0;--j){
                int diff = a[i]-a[j];
                dp[i][diff+500] = max(dp[i][diff+500],dp[j][diff+500]+1);
                ans = max(dp[i][diff+500],ans);
            }
        }
        return ans+1;
    }
};