//only use this code when to_string wli approach gives rte :)

//iterative method
    int getsumofdigits(int n){
        
        long long sum=0;
        while(n!=0){
            int rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        return sum;
    }