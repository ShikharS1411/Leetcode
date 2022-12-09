class Solution {
public:
    int countPrimes(int n) {
        //cant apply brute force as pr constraints
                //Sieve of Eratosthenes
        int cnt =0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        for(int i =2; i<n; i++){
            if(prime[i]){
                cnt++;
                for(int j = 2*i; j<n; j+=i){
                    prime[j] = false;
                }
            }
        }
        return cnt;
    }
};