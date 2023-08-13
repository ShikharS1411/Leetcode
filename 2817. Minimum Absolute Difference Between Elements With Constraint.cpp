class Solution {
public:
    int minAbsoluteDifference(vector<int>& a, int x) {
        set<int> s;
        int ans=INT_MAX;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(i-x>=0)s.insert(a[i-x]);
            auto it=s.upper_bound(a[i]);
            if(it!=s.end()){
                ans=min(ans,(*it)-a[i]);
            }
            if(it!=s.begin()){
                it--;
                ans=min(ans,a[i]-(*it));
            }
        }
        return ans;
    }
};