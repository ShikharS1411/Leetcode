#define ll long long int
#define pb push_back
class Solution {
public:
    long long minimumPossibleSum(int n, int k) {
        //cf ka q h ig :/
        // return -1;
        vector<ll>a,ans;
        // for(int i=1;i<=max(n,k);i++)a.pb(i);
        // for(auto x:a)cout<<x<<" ";
        // cout<<endl;
        int val=k/2;
        for(int i=1;i<=min(val,n);i++)ans.pb(i);
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
        ll sum=0;
        if(ans.size()==n){
            for(auto x:ans)sum+=x;
            return sum;
        }
        int sz=ans.size();
        int j=k;
        for(int i=sz;i<n;i++)ans.pb(j++);
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
        for(auto x:ans)sum+=x;
        return sum;
    }
};