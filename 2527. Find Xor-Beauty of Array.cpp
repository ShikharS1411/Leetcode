class Solution {
public:
    int xorBeauty(vector<int>& a) {
        int xr=0;
        for(auto x:a)xr^=x;
        return xr;
    }
};