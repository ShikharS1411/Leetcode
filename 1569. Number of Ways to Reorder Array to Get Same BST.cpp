#define ll long long int
const ll mod = 1e9 + 7;
class Solution {
    vector<vector<ll>>dp;
int fun(int n,int r){   
    if(r==0||r==n)return 1;
    if(r==1||r==n-1)return n;
    if(dp[n][r]!=-1)return dp[n][r];
    return dp[n][r]=(fun(n-1,r)%mod+fun(n-1,r-1)%mod)%mod;
}
ll solve(vector<int>&a){
    if(a.size()<=1) return 1;
    vector<int> l,r;
    for(int i=1;i<a.size();i++){
        if(a[i]>a[0]) r.push_back(a[i]);
        else l.push_back(a[i]);
    }
    int n=l.size(),m=r.size();
    return (solve(l)*solve(r)%mod*fun(n+m,n))%mod;
}

public:
    int numOfWays(vector<int>& a) {
        dp.resize(a.size()+1,vector<ll>(a.size()+1,-1));
        return solve(a)-1;
    }
};