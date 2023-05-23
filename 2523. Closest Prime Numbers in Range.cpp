#define ll long long int
#define pb push_back
#define fi first
#define se second
#define MP make_pair
class Solution {
public:
    vector<int> closestPrimes(int l, int r) {
        /*
        https://github.com/ShikharS1411/Leetcode/blob/master/Sieve%20of%20eratosthenes%20.cpp
        */
        //get all the prime no using seive of eranthosis
        //to get all primes numbers within the range
        //sieve of eranthosis
        //this is_prime vector will contain the check of all prime numbers upto the range (as per constraints)
        vector<int>is_prime(1e6+5,true);
        is_prime[0]=false;
        is_prime[1]=false;
        //0,1 are not prime
        for( ll i=2;i<1e6+5;i++){
            if(is_prime[i]==true){
                for(ll j=2*i;j<1e6+5;j+=i){
                    is_prime[j]=false;
                }
            }
        }
// further use this (prime number vector) acc to question demands
        
        vector<int>a;
        for(int i=l;i<=r;i++){
            if(is_prime[i])a.pb(i);
        }
        // for(auto x:a)cout<<x<<" ";
        // return {-1,-1};
        if(a.size()<=1 || l==r)return {-1,-1};
        vector<pair<int,pair<int,int>>>vp;
        for(int i=0;i<a.size()-1;i++){
            int diff=a[i+1]-a[i];
            vp.pb({diff,{a[i],a[i+1]}});
            // vp.pb(MP(diff,MP(a[i],a[i+1])));
        }
        sort(vp.begin(),vp.end());
        return {vp[0].se.fi,vp[0].se.se};
         // return {-1,-1};
    }
};