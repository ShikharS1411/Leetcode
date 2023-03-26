#define ll long long int
#define pb push_back
class Solution {
public:
bool primeSubOperation(vector<int>& a) {
        int n=a.size();
        vector<int>is_prime(1000,true),p;
        for( ll i=2;i<1000;i++){
            if(is_prime[i]==true){
                for(ll j=2*i;j<1000;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        for(int j=2;j<1000;j++){
            //store all the primes
            if(is_prime[j])p.pb(j);
        }
        int ind=lower_bound(p.begin(),p.end(),a[0])-p.begin();
        if(ind-1>=0)a[0]=a[0]-p[ind-1];
        for(int i=1;i<n;i++){
            ind=lower_bound(p.begin(),p.end(),a[i]-a[i-1])-p.begin();
            if(ind-1>=0)a[i]=a[i]-p[ind-1];
            if(a[i]<=a[i-1])return false;
        }
        return true;
    }
};