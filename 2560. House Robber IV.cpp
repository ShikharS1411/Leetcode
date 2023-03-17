class Solution {
public:
    bool check(int mid,vector<int>&a,int k){
        //now check if mid(the capability is valid or not) acc to prob stat
        int total_capability=0;
        for(int i=0;i<a.size();){
            if(a[i]<=mid){
                i+=2;//as adjacent
                total_capability++;
            }
            else i++;
        }
        if(total_capability<k)return false;
        return true;
    }
    int minCapability(vector<int>& a, int k) {
        /*
        //ok it aint that ez hehe,need to keep the check of k as well lol
        vector<pair<int,int>>temp;
        int i=0;
        // if(a.size()<=2)return -1;
        for(auto x:a)temp.pb(make_pair(x,i++));
        sort(temp.begin(),temp.end());
        if(a.size()<=2){
            sort(temp.rbegin(),temp.rend());
            return temp[0].first;
        }
        // for(auto x:temp)cout<<x.first<<" "<<x.second<<"  ";
        // cout<<endl;
        if(abs(temp[1].second-temp[0].second)>1)return temp[1].first;
        // cout<<temp[1].first;
        // cout<<endl;
        return temp[2].first;
        */
        //whenever min of max or vice versa->BS
        // l->best case mei ans
        //r->worst case mei ans
        //else we can take 1 and constraint value as well hehe
        int l=*min_element(a.begin(),a.end());
        int r=*max_element(a.begin(),a.end());
        int ans=0;
        while(l<=r){
            int mid=(l+r)>>1;
            if(check(mid,a,k)){
                ans=mid;
                r=mid-1;//as need to minimise and/capability
            }
            else l=mid+1;
        }
        return ans;
    }
};