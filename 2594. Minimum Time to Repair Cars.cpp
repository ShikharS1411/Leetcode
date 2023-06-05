#define ll long long int
class Solution {
public:
    long long repairCars(vector<int>& a, int k) {
        ll l=1,r=1e18,ans=0;
        while(l<=r){
            ll mid=l+(r-l)/2;
            ll count=0;
            for(int x:a){
                count+=sqrt(mid/x);
            }
            if(count>=k){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }
        return ans;
    }
};