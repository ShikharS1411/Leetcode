#define ll long long int
class Solution {
public:
    int minimumSum(int n, int k) {
        ll sum=0;
        for(int i=1;i<=n;i++)sum+=i;
        map<int,int>mp;
        int val=0;
        if(k&1)val=k/2;
        else val=k/2-1;
        int to_add=0;
        if(n<k)to_add=k;
        else to_add=n+1;
        for(int i=val;i>=1;i--){
            // mp[i]=k-i;
            if(k-i>n)break;
            // cout<<k-i<<" ";
            sum-=k-i;
            sum+=to_add;
            to_add++;
        }
        // cout<<endl;
        return int(sum);
    }
};