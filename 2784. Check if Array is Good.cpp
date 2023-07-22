#define pb push_back
class Solution {
public:
    bool isGood(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        vector<int>temp;
        for(int i=1;i<n;i++)temp.pb(i);
        temp.pb(n-1);
        return temp==a;
    }
};