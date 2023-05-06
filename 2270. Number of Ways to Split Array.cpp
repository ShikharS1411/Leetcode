#define pb push_back
#define ll long long int
class Solution {
public:
    int waysToSplitArray(vector<int>& a) {
        /*
        //TLE wtf??
        vector<ll>pref,suff;
        ll sum=0;
        int n=a.size(),count=0;
        for(auto x:a){
            sum+=x;
            pref.pb(sum);
        }
        sum=0;
        for(int i=n-1;i>-1;i--){
            sum+=a[i];
            suff.pb(sum);
        }
        for(auto x:pref)cout<<x<<" ";
        cout<<endl;
        for(auto x:suff)cout<<x<<" ";
        cout<<endl;
        //can reverse suff :P
        reverse(suff.begin(),suff.end());
        for(int i=0;i<n-1;i++){
            if(pref[i]>=suff[i+1])count++;
        }
        return count;
        */
        int n=a.size();
        vector<ll> pref(n),suff(n);
        int count=0;
        pref[0]=a[0];
        suff[n-1]=a[n-1];
        for(int i=1;i<n;i++)pref[i]=pref[i-1]+a[i];
        for(int i=n-2;i>=0;i--)suff[i]=suff[i+1]+a[i];
        for(int i=0;i<n-1;i++){
            if(pref[i]>=suff[i+1])count++;
        }
        return count;
    }
};