#define ll long long int
class Solution {
public:
    long long maxSum(vector<int>& a, int m, int k) {
        ll sum=0;
        // vector<ll>pref;
        // for(auto x:a){
        //     sum+=x;
        //     pref.pb(sum);
        // }
        map<ll,ll>mp;
        for(int i=0;i<k;i++){
            sum+=a[i];
            mp[a[i]]++;
        }
        int i=0,j=k-1,n=a.size();
        sum-=a[j];
        // cout<<mp.size()<<endl;
        // mp.erase(a[j]);
        mp[a[j]]--;
        if(mp[a[j]]==0)mp.erase(a[j]);
        // cout<<mp.size()<<endl;
        ll maxi=0;
        while(j<n){
            // cout<<"check"<<endl;
            sum+=a[j];
            mp[a[j]]++;
            int sw=j-i+1;
            // && mp.size()>=m
            if(sw==k){
                // cout<<"check"<<endl;
                if(mp.size()>=m)maxi=max(maxi,sum);
                // cout<<maxi<<endl;
                sum-=a[i];
                // cout<<mp[a[i]]<<endl;
                mp[a[i]]--;
                if(mp[a[i]]==0)mp.erase(a[i]);
                i++;
            }
            j++;
        }
        return maxi;
    }
};