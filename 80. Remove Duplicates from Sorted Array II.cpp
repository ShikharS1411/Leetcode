#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        map<int,int>mp;
        vector<int>ans;
        for(auto x:a)mp[x]++;
        for(auto x:mp){
            if(x.se>1){
                ans.pb(x.fi);
                ans.pb(x.fi);
                mp.erase(x.fi);
            }
            else {
                ans.pb(x.fi);
                mp.erase(x.fi);
            }
        }   
        for(auto x:ans)cout<<x<<" ";
        // return -1;
        int n=ans.size();
        a.clear();
        for(auto x:ans)a.pb(x);
        return n;
    }
};