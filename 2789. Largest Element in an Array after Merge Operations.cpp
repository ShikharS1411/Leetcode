#define ll long long int
#define pb push_back
class Solution {
public:
    long long maxArrayValue(vector<int>& a) {
        int n=a.size();
        vector<ll>ans;
        for(auto x:a)ans.pb(x);
        for(int i=n-1;i>=1;i--){
            if(ans[i-1]<=ans[i])ans[i-1]=ans[i]+ans[i-1];
        }
        ll maxi=*max_element(ans.begin(),ans.end());
       return maxi;
    }
};