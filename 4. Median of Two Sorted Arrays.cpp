class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        //not so optimal way
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        int n=a.size();
        if(n&1)return (double)a[n/2];
        return (double)(((double)a[n/2-1]+(double)a[n/2])/2);
    }
};