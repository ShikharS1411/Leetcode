class Solution {
public:
    bool check(int mid,vector<int>&a,int k){
        int smaller_pairs=0,n=a.size();
        //get pairs by using two pointer/sliding window approach
        int i=0,j=1;
        for(int i=0;i<n;i++){
            while(j<n && a[j]-a[i]<=mid)j++;
            j--;
            int sz=j-i;
            smaller_pairs+=sz;
        }
        if(smaller_pairs<k)return false;
        return true;
    }
    int smallestDistancePair(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        //use BS
        //  best          worst
        int l=0,r=a.back()-a.front();
        int ans=0;
        while(l<=r){
            int mid=(l+r)>>1;
            if(check(mid,a,k)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};