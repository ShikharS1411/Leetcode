class Solution {
public:
    int numberOfCuts(int n) {
        if(n==0 or n==1)return 0;
        if(n%2==0)return n/2;
        return n;
    }
};