class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*
        //edge cases
        if(n==1) return true;
        if(n==0) return false;
        //firstly check if the number is even or odd
        if(n%2==0){
            while(n%2==0){
                n/=2;
                if(n==1) return true;
            }
        }
        return false;
        */
        /*
        // more optimised sol
        for(int i=0;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n) return true;
        }
        return false;
        */
        //using bit manuplation
        //as integer which are power of two only containes 1 set bit so
        //base case
        if(n<=0) return false;
        if((n&(n-1))==0) return true;//that 1 set bit is reduced to 0 and now for that integer to be pow of 2 it should not containe anymore set bits
        return false;
    }
};