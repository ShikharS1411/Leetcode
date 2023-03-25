#define ll long long int
class Solution {
public:
    bool check(int mid,vector<int>&a,int k){
        ll tot_balls=1;
        int n=a.size();
        int j=0;
        for(int i=1;i<n;i++){
            //when mid can be minimised
            if(a[i]-a[j]>=mid){
                tot_balls++;
                j=i;
            }
        }
        if(tot_balls<k)return false;
        return true;
    }
    int maxDistance(vector<int>& a, int k) {
        //min of max->use BS
        sort(a.begin(),a.end());//1,2,3,1000 cant predict with two pointer
        int l=1,r=1e9;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,a,k)){
                ans=mid;
                //as need to max
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};