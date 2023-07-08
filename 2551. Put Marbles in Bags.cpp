#define ll long long int
#define pb push_back
class Solution {
public:
long long putMarbles(vector<int>& a, int k) {
    int n=a.size();
    vector<int>temp;
    for (int i = 0;i<n-1;i++){
        temp.pb(a[i]+a[i+1]);
    }
    sort(temp.begin(),temp.end());
    ll min_sum=0,max_sum=0;
    for (int i=0;i<k-1;i++){
        min_sum+=temp[i];
        max_sum+=temp[n-2-i];
    }
    return max_sum-min_sum;
    }
};