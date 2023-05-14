class Solution {
public:
    bool doesValidArrayExist(vector<int>& a) {
        int xorr=0;
        for(auto x:a)xorr^=x;
        return xorr==0;
    }
};