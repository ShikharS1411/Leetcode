#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int maximumBeauty(vector<int>& a, int k) {
        /*
        //this will give tle ig :/
        map<int,int>mp;
        for(auto x:a){
            for(int i=x-k;i<=x+k;i++)mp[i]++;
        }
        int maxi=0;
        for(auto x:mp){
            if(x.se>maxi)maxi=x.se;
        }
        return maxi;
        */
        map<int,int>mp; 
        for(auto x:a){
            mp[x-k]++;
            mp[x+k+1]--; 
        } 
        int maxi=0,count=0; 
        for(auto x:mp){ 
            count+=x.se; 
            maxi=max(maxi,count); 
        } 
        return maxi; 
    }
};