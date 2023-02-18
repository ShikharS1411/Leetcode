class Solution {
public:
    int maximumGroups(vector<int>& a) {
        sort(a.begin(),a.end());
        int i=1,n=a.size();
        while(i*(i+1)/2<=n)i++;
        i--;
        return i;
    }
};