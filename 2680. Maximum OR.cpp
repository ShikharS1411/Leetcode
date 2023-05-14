#define ll long long int
class Solution {
public:
    long long maximumOr(vector<int>& a, int k) {
        int n=a.size();
        vector<int>pref(n+1);//make pref OR array
        vector<int>suff(n+1);
        pref[0]=0;//just for simplification
        suff[n]=0;
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]|a[i];
        }
        for(int i=n-1;i>=0;i--){
            suff[i]=suff[i+1]|a[i];
        }
        ll maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,pref[i]|(1ll)*a[i]<<k|suff[i+1]);
        }
        return maxi;
    }
};