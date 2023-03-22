class Solution {
public:
    bool check(int mid,vector<int>&a,int k){
        int tot_oper=0;
        for(int i=0;i<a.size();i++){
            if(a[i]%mid==0)tot_oper+=(a[i]/mid)-1;
            else tot_oper+=a[i]/mid;
        }
        if(tot_oper>k)return false;
        return true;
    }
    int minimumSize(vector<int>& a, int k) {
        //whenever max of min or vice versa always use BS
        //need to set penalty->use BS
        int l=1,r=1e9;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,a,k)){
                ans=mid;
                //as need to minimize
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};