#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int maximumSum(vector<int>& a) {
        map<int,vector<int>>mp;
        for(auto x:a){
            string s=to_string(x);
            int sum=0;
            for(auto it:s)sum+=it-'0';
            mp[sum].pb(x);
        }
        for(auto x:mp){
            cout<<x.fi<<" ";
            for(auto it:x.se)cout<<it<<" ";
            cout<<endl;
        }
        // return -1;
        int maxi=-1;
        for(auto x:mp){
            int n=x.se.size();
            if(n>1){
                sort(x.se.rbegin(),x.se.rend());
                maxi=max(maxi,x.se[0]+x.se[1]);
            }
        }
        return maxi;
    }
};