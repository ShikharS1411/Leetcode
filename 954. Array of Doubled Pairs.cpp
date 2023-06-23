#define se second
class Solution {
public:
    bool canReorderDoubled(vector<int>& a) {
        map<int,int>mp;
        for(auto x:a)mp[x]++;
        sort(a.begin(),a.end());
        for(auto x:a){
            if(mp[2*x] && mp[x]){
                mp[x]--;
                mp[2*x]--;
            }
        }
        for(auto x:mp){
            if(x.se)return false;
        }
        return true;
    }
};