#define pb push_back
#define fi first
#define se second
class Solution {
public:
    /*
    int check(vector<int>&v,int x){
        //tle bc -_-
        //can use pq as well 
        // sort(v.begin(),v.end());
        // for(auto x:v)cout<<x<<" ";
        // cout<<endl;
        // return v[x-1];
        priority_queue<int>pq;
        //smallest->max heap
        //greatest->min heap 
        for(auto it:v){
            pq.push(it);
            if(pq.size()>x)pq.pop();
        }
        return pq.top();
    }
    vector<int> getSubarrayBeauty(vector<int>& a, int k, int x) {
        int i=0,j=0;
        vector<int>v,ans;
        while(j<a.size()){
            v.pb(a[j]);
            // cout<<a[j]<<" ";
            if(j-i+1==k){
                // for(auto x:v)cout<<x<<" ";
                // cout<<endl;
                int val=check(v,x);
                if(val>=0)val=0;
                ans.pb(val);
                // pop_front();
                // v.erase(0,1);
                v.erase(v.begin());
                i++;
            }
            j++;
        }
        return ans;
        //this will fail tho as dublicates would be there,thus not sure which 'element' would be xth smallest :D
        */
    int check(map<int,int>&mp,int x){
        int y=0;
        for(auto it:mp){
            if(it.fi<0)y+=it.se;
            if(y>=x)return it.fi;
        }
        return 0;
    }
    vector<int> getSubarrayBeauty(vector<int>& a, int k, int x) {
        //optimised approach
        int i=0,j=0;
        map<int,int>mp;
        vector<int>ans;
        while(j<a.size()){
            mp[a[j]]++;
            // cout<<a[j]<<" ";
            if(j-i+1==k){
                // for(auto x:v)cout<<x<<" ";
                // cout<<endl;
                int val=check(mp,x);
                if(val>=0)val=0;
                ans.pb(val);
                mp[a[i]]--;
                if(mp[a[i]]==0)mp.erase(a[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};