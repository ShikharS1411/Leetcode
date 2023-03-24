#define ll long long int
class Solution {
public:
    bool check(int mid,vector<int>&a,int k){
        //check for mid
        ll tot_thres=0;
        for(auto x:a){
            tot_thres+=ceil((double)x/(double)mid);
        }
        if(tot_thres>k)return false;
        return true;
    }
    int smallestDivisor(vector<int>& a, int k) {
        //need to set penalty
        int l=1,r=1e6;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,a,k)){
                ans=mid;
                //as need to minimise
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};