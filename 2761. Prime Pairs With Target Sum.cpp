#define ll long long int
#define pb push_back
class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
//to get all primes numbers within the range
    //sieve of eranthosis
    //this is_prime vector will contain the check of all prime numbers upto the range (as per constraints)
    vector<int>is_prime(n+5,true);
    is_prime[0]=false;
    is_prime[1]=false;
    //0,1 are not prime
    for( ll i=2;i<n+5;i++){
        if(is_prime[i]==true){
            for(ll j=2*i;j<n+5;j+=i){
                is_prime[j]=false;
            }
        }
    }
// further use this (prime number vector) acc to question demands
        vector<vector<int>>ans;
        int i=2,j=n-2;
        // for (int i=2;i<=n/2;i++){
            // int j=n-i;
        while(i<=j){
            if (i<=j && is_prime[i] && is_prime[j])ans.pb({i,j});
            i++,j--;
            }
        return ans;
    }
};