class Solution {
public:
    bool check(int mid,vector<int>&a,int k){
        //need to max mid(if exists)
        int j=0,sz=1;
        for(int i=1;i<a.size();i++){
            if(a[i]-a[j]>=mid){
                j=i;
                sz++;
            }   
        }
        if(sz<k)return false;
        return true;
    }
    int maximumTastiness(vector<int>& a, int k) {
        //whenever max of min or vice versa use BS
        sort(a.begin(),a.end());
        int l=0,r=a.back()-a.front();//best and worst case
        int ans=0;
        while(l<=r){
            int mid=(l+r)>>1;
            if(check(mid,a,k)){
                ans=mid;//possible ans
                // r=mid-1;
                l=mid+1;//as need to max mid
            }
            else r=mid-1;
        }
        return ans;
    }
};