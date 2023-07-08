#define pb push_back
#define fi first
#define se second
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& a, vector<int>& mf, vector<int>& mt) {
        map<int,int>mp;
        for(auto x:a)mp[x]=1;
        for(int i=0;i<mf.size();i++){
            if(mp.find(mf[i])!=mp.end()){
                mp[mf[i]]=0;
                mp[mt[i]]=1;
            }
        }
        vector<int>ans;
        for(auto x:mp){
            if(x.se)ans.pb(x.fi);
        }
        return ans;
    }
};