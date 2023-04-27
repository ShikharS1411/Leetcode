#define pb push_back
#define fi first
#define se second
class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        map<int,int>mp1,mp2;
        for(auto x:a)mp1[x]++;
        for(auto x:b)mp2[x]++;
        vector<int>ans;
        for(auto x:mp1){
            if(mp2.find(x.fi)!=mp2.end()){
                int mini=min(x.se,mp2[x.fi]);
                while(mini--)ans.pb(x.fi);
            }
        }
        return ans;
    }
};