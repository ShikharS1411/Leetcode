#define pb push_back
#define se second
class Solution {
public:
    int minimumCardPickup(vector<int>& a) {
        map<int,vector<int>>mp;
        for(int i=0;i<a.size();i++)mp[a[i]].pb(i);
        int mini=1e9,minii=1e9;
        for(auto x:mp){
            vector<int>temp=x.se;
            //diff sorted hona chye bruh
            if(temp.size()>1){
                for(int i=0;i<temp.size()-1;i++)minii=min(minii,temp[i+1]-temp[i]);
                mini=min(mini,minii+1);
            }
        }
        if(mini==1e9)return -1;
        return mini;
    }
};