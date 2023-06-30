#define ll long long int
class Solution {
public:
    int makeTheIntegerZero(int n1, int n2) {
        ll num1=n1,num2=n2;
        for (ll m=1;m<=60;m++){
            ll x=num1-m*num2;
            if(x>=m){
                ll set_bits=__builtin_popcountll(x);
                if(set_bits<=m){
                    return m;
                }
            }
        } 
        return -1;
    }
};