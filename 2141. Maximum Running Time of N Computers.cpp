#define ll long long int
class Solution {
public:
    bool check(ll mid,int n,vector<int>&a){
        //now just check ki "mid" time mei yeh possible h ya nhi 
        ll tot_time=mid*n;
        ll curr_time=0;
        for(ll x:a)curr_time+=min(mid,x);
        if(curr_time>=tot_time)return true;
        return false;
    }
    long long maxRunTime(int n, vector<int>& a) {
        ll l=0,r=1e14,ans=0;
        //       1e9*n
        while(l<=r){
            ll mid=l+(r-l)/2;
            //as max 
            if(check(mid,n,a)){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};