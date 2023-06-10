#define ll long long int
class Solution {
public:
    ll getsum(int len, int val){
        if(len==0)return 0;
        if(len>val-1)return ((ll)(val-1)*(2*val-(val-1)+1))/2+(ll)(len-val+1);
        else return ((ll)(len)*(2*val-(len)+1))/2;
    }
    bool check(int idx,int max_sum,int n,int mid){
        ll right=getsum(n-idx-1,mid-1);
        ll left=getsum(idx,mid-1);
        // cout << l_min << " " << r_min << endl;
        if (max_sum>=left+right+mid)return true;
        return false;
    }
    int maxValue(int n,int index,int maxSum){
        int l=1,r=maxSum;
        int ans=0;
        while(l<=r)
        {
            ll mid =(l+r)/2;
            if(check(index,maxSum,n,mid)){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};