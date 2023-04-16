#define fi first 
#define se second
class Solution {
public:
    int maxDivScore(vector<int>& a, vector<int>& b) {
        // can apply brute force
        map<int,int>mp;
        int maxi=-1e9;
        int key=0;
        for(int i=0;i<b.size();i++){
            if(b[i]==0)continue;
            if(mp[b[i]]==0){
                for(int j=0;j<a.size();j++){
                    if(a[j]%b[i]==0)mp[b[i]]++;
                }
            }
        }
        for(auto x:mp){
            if(x.se>maxi){
                maxi=x.se;
                key=x.fi;
            }
        }
        return key;
    }
};