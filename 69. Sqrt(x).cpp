#define ll long long int
class Solution {
public:
    int mySqrt(int x) {
        // return sqrt(x);//hehe
        //using BS
        int l=0,r=x,ans=0;
        while(l<=r){
            ll mid=(l+r)>>1;
            if(mid*mid==x)return mid;
            else if(mid*mid>x)r=mid-1;
            else {
                ans=mid;//as choote wle ki possiblity h
                l=mid+1;
            }
        }
        return ans;
    }
};