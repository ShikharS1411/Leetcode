#define pb push_back
class Solution {
public:
    int minSwaps(vector<int>& a) {
        int tot_ones=count(a.begin(),a.end(),1);
        if(tot_ones==0)return 0;
        vector<int>v;
        for(auto x:a)v.pb(x);
        for(auto x:a)v.pb(x);
        for(auto x:v)cout<<x<<" ";
        int i=0,n=v.size(),curr_ones=0;
        int mini=1e9;
        for(int j=0;j<n;j++){
            if(v[j]==1)curr_ones++;
            if(j-i+1==tot_ones){
                mini=min(mini,tot_ones-curr_ones);
                if(v[i]==1)curr_ones--;
                i++;
            }
        }
        return mini;
        // return -1;
    }
};