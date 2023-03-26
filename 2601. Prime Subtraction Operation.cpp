#define ll long long int
#define pb push_back
class Solution {
public:
bool primeSubOperation(vector<int>& a) {
    int n=a.size();
    //sieve of eranthosis
    vector<int>is_prime(1000,true),p;
    is_prime[0]=false;
    is_prime[1]=false;
    //0,1 are not prime
    for( ll i=2;i<1000;i++){
        if(is_prime[i]==true){
            for(ll j=2*i;j<1000;j+=i){
                is_prime[j]=false;
            }
        }
    }
    for(int j=0;j<1000;j++){
        //store all the primes
        if(is_prime[j])p.pb(j);
    }
    int ind=lower_bound(p.begin(),p.end(),a[0])-p.begin();
    if(ind!=0)a[0]-=p[ind-1];
    for(int i=1;i<n;i++){
        ind=lower_bound(p.begin(),p.end(),a[i]-a[i-1])-p.begin();
        if(ind!=0)a[i]-=p[ind-1];
        if(a[i]<=a[i-1])return false;
    }
    //dont use this as cant determine if strictly inc or not
    // if(is_sorted(a.begin(),a.end()))return true;
    // return false;
    return true;
    }
};