class Solution {
public:
    int buyChoco(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int sum=k-(a[0]+a[1]);
        if(sum<0)return k;
        return sum;
    }
};