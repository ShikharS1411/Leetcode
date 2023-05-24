class Solution {
public:
    int maximumGap(vector<int>& a) {
        if(a.size()<2)return 0;
        int maxi=0;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++)maxi=max(maxi,a[i+1]-a[i]);
        return maxi;
    }
};