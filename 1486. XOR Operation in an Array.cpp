class Solution {
public:
    int xorOperation(int n, int s) {
        vector<int>a(n);
        int xr=0;
        for(int i=0;i<n;i++){
            a[i]=s+2*i;
            xr^=a[i];
        }
        return xr;
    }
};