#define pb push_back
class Solution {
public:
    int minOperations(int n) {
        //although can do by making array and caculating its pref sum,but do by simple obv hehe
        int x=n/2;
        if(n&1)return x*(x+1);
        return (x*(1+((2*x)-1))/2);
    }
};