#define ll long long int
class Solution {
public:
    int reachNumber(int k) {
        k=abs(k);
        int i=0;
        ll sum=0;
        while(sum<k){
            i++;
            sum+=i;
        }
        if((sum-k)%2==0)return i;
        while((sum-k)&1){
            i++;
            sum+=i;
        }
        return i;
    }
};