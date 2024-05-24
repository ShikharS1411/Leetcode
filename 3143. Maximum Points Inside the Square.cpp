#define ll long long int
#define pb push_back
class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& a, string s) {
        map<char,vector<ll>>mp;
        for(int i=0;i<a.size();i++)mp[s[i]].pb(max(abs(a[i][0]),abs(a[i][1])));
        ll mini=1e18;
        for(auto &[x,y]:mp){
            // sort(mp[x].begin(),mp[x].end());
            sort(y.begin(),y.end());//make sure to use & ;)
            if(y.size()>1)mini=min(mini,y[1]);
        }
        // cout<<mini<<endl;
        // for(auto [x,y]:mp){
        //     cout<<x<<"  ";
        //     for(auto z:y)cout<<z<<" ";
        //     cout<<endl;
        // }
        int c=0;
        for(auto &[x,y]:mp)if(y.front()<mini)c++;
        return c;
    }
};
