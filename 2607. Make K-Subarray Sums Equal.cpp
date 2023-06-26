#define ll long long int
#define pb push_back
class Solution {
public:
    long long makeSubKSumEqual(vector<int>& a, int k) {
        ll ans=0;
        int n=a.size();
        k=__gcd(k,n);
        for(int i=0;i<k;i++){
            vector<int>temp;
            for(int j=i;j<n;j+=k)temp.pb(a[j]);
            sort(temp.begin(),temp.end());
            ll x=temp[temp.size()/2];
            for(int j=i;j<n;j+=k)ans+=abs(a[j]-x);
        }
        return ans;
    }
};