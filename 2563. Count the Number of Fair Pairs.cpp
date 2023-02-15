#define ll long long int
class Solution {
public:
    long long countFairPairs(vector<int>& a, int lower, int upper) {
        ll count=0;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            int l=lower-a[i],u=upper-a[i];
            count+=upper_bound(a.begin()+(i+1),a.end(),u)-a.begin()-(lower_bound(a.begin()+(i+1),a.end(),l)-a.begin());
        }
        return count;
    }
};