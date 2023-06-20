#define ll long long int
#define pb push_back
class Solution {
public:
    vector<int> getAverages(vector<int>& a, int k) {
        //pref sum+sw??
        int sz=2*k+1;
        int mid_ind=sz/2;
        int j=sz-1;
        int i=0;
        int n=a.size();
        vector<ll>pref(n+1);
        pref[0]=0;
        // ll sum=0;
        // cout<<pref[0]<<" ";
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+a[i];
            // cout<<pref[i+1]<<" ";
        }
        vector<int>ans(n,-1);
        while(j<n){
            ans[mid_ind]=(pref[j+1]-pref[i])/sz;
            mid_ind++;
            j++,i++;
        }
        return ans;
    }
};