#define pb push_back
class Solution {
public:
    int kItemsWithMaximumSum(int no, int nz, int nno, int k) {
        vector<int>a;
        while(no--)a.pb(1);
        while(nz--)a.pb(0);
        while(nno--)a.pb(-1);
        int sum=0;
        for(int i=0;i<k;i++)sum+=a[i];
        return sum;
    }
};