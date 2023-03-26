//to get all primes numbers within the range
    //sieve of eranthosis
    //this is_prime vector will contain the check of all prime numbers upto the range (as per constraints)
    vector<int>is_prime(range+5,true);
    is_prime[0]=false;
    is_prime[1]=false;
    //0,1 are not prime
    for( ll i=2;i<range+5;i++){
        if(is_prime[i]==true){
            for(ll j=2*i;j<range+5;j+=i){
                is_prime[j]=false;
            }
        }
    }
// further use this (prime number vector) acc to question demand