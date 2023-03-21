#define ll long long int
class Solution {
public:
    bool check(ll mid,vector<int>&a,int c){
        //get how many car each ranked mech can repair in the given time->mid
        //if all then try to minimse it
        ll car_rep=0;
        for(int i=0;i<a.size();i++){
            car_rep+=sqrt(mid/a[i]);
        }
        if(car_rep<c)return false;
        return true;
    }
    long long repairCars(vector<int>& a, int c) {
        //need to select penalty/time->use BS
        ll l=1,r=1e14;//worst case r=100,n=1e9->r*n2 is the worst case range
        ll ans=0;
        while(l<=r){
            ll mid=(l+r)>>1;
            if(check(mid,a,c)){
                ans=mid;
                //as need to minimize the time aka mid
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};