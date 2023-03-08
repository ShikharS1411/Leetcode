class Solution {
public:
    bool check(int mid,vector<int>&a,int k){
        int subarray=0,total_sum=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>mid)return false;
            if(total_sum+a[i]<=mid)total_sum+=a[i];
            else{
                //when total_sum get exceed inc subarray count and update total_sum with new a[i]
                subarray++;
                total_sum=a[i];
            }
        }
        subarray++;
        if(subarray>k)return false;
        return true;
    }
    int splitArray(vector<int>& a, int k) {
        //cant apply brute force as if k>2 it will give tle
        //as max of min so always use BS
        // int l=*max_element(a.begin(),a.end());//as at min yeh toh value hogi sum ki 
        int l=0,r=0,ans=0;
        for(auto x:a)r+=x;//worst case when k=0;hypothetically saying
        while(l<=r){
            int mid=(l+r)/2;
            if(check(mid,a,k)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};