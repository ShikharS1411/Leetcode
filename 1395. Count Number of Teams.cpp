class Solution {
public:
    int dp[1000][1001][4];
    int solve(int ind,int pre_ind,int count,vector<int> &a){
        if(count==0)return 1;
        if(ind>=a.size())return 0;
        if(dp[ind][pre_ind+1][count]!=-1)return dp[ind][pre_ind+1][count];
        int pick=0;
        if(pre_ind==-1 || a[ind]>a[pre_ind])
            pick=solve(ind+1,ind,count-1,a);
        int not_pick=solve(ind+1,pre_ind,count,a);
        return dp[ind][pre_ind+1][count]=pick+not_pick;
    }
    int numTeams(vector<int>& a) {
        memset(dp,-1,sizeof(dp));
        int inc=solve(0,-1,3,a);
        //rev it for dec one's
        reverse(a.begin(),a.end());
        memset(dp,-1,sizeof(dp));
        int dec=solve(0,-1,3,a);
        return (inc+dec);
    }
};