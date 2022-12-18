class Solution {
public:
    /*
    bool checkprime(int n){
        for(int i=2;i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int smallestValue(int n) {
        //edge case
        if(n==1||n==2)return n;
        //get all the factors of n
        int sum=0;
        for(int i=2;i<=n;i++){
            while(n%i==0 && checkprime(i)){
                sum+=i;
                n=n/i;
            }
        }
        //base case
        if(checkprime(sum))return sum;
        //call function itself
        smallestValue(sum);
        */
    int solve(int n){
        if(n<=3) return n;
        int sum=0;
        for(int i=2; i<=n; i++){
            while(n%i == 0){
                sum += i;//i would be prime only as least
                n = n/i;
            }
        }
        return sum;
    }
    int smallestValue(int n) {
        int result = solve(n);
        while(true){
            int ans = solve(result);
            if(ans < result) result = ans;
            else return result;
        }
        return 0;
    }
};