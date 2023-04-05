#define ll long long int
class Solution {
public:
    bool check(int mid,vector<int>&a){
        //pref sum
        ll sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            if(sum>(1ll)*mid*(i+1))return false;
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& a) {
        //mini the maxi ->Use BS
        int l=0,r=*max_element(a.begin(),a.end());
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,a)){
                ans=mid;
                //need to minimise at the end
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};