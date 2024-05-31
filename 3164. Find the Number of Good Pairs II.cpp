#define ll long long int
#define pb push_back
class Solution {
public:
    long long numberOfPairs(vector<int>& a, vector<int>& b, int k) {
        map<ll,ll>mp1,mp2;
        for(auto x:a)mp1[x]++;
        for(auto x:b)mp2[x*k]++;
        ll maxi=*max_element(a.begin(),a.end());
        ll ans=0;
        for(auto &[x,y]:mp2){
            ll val=x,mul=val;
            while(maxi>=val){
                ans+=y*mp1[val];
                val+=mul;//check for all of its multiple in mp1
            }
        }
        return ans;
    }
};