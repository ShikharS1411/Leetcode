#define ll long long int
#define pb push_back
class Solution {
public:
    vector<long long> minOperations(vector<int>& a, vector<int>& q) {
        /*
        //will give TLE
        //brute force?
        vector<ll>ans;
        for(int i=0;i<q.size();i++){
            ll count=0;
            for(int j=0;j<a.size();j++)count+=abs(a[j]-q[i]);
            ans.pb(count);
        }
        return ans;
        */
        sort(a.begin(),a.end());
        int n=a.size();
        vector<ll>ps(n,0);
        ps[0]=a[0];
        for(int i=1;i<n;++i)ps[i]=a[i]+ps[i-1];
        ll sum=0;
        for(auto x:a)sum+=x;
        vector<ll>ans;
        for(auto x:q){
            int ind=lower_bound(a.begin(),a.end(),x)-a.begin();
            if(ind==n || ind==0)ans.pb(abs((1ll)*x*n-sum));
            else{
                ll temp=(abs((1ll)*x*(ind)-ps[ind-1]));
                temp+=(abs((1ll)*x*(n-ind)-(ps[n-1]-ps[ind-1])));
                ans.pb(temp);
            }       
        }
        return ans;
    }
};