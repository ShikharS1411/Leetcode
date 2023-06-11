class Solution {
public:
    int findNonMinOrMax(vector<int>& a) {
        if(a.size()<=2)return -1;
        sort(a.begin(),a.end());
        return a[1];
    }
};