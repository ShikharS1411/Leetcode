#define ll long long int
class Solution {
public:
    bool check(int mid,vector<int>&a,int n){
        //check for mid possiblity 
        // mid->the minimised max prod aftr distributation
        ll tot_store=0;
        for(int i=0;i<a.size();i++){
            tot_store+=ceil(((double)a[i])/(double)mid);
            //mid amount se kitne store ko wo quantaty distribute kr skte h
        }
        if(tot_store>n)return false;
        return true;
    }
    int minimizedMaximum(int n, vector<int>& a) {
        //min of max or vice versa->use BS
        int l=1,r=1e5;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,a,n)){
                ans=mid;
                //as need to minimise
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};