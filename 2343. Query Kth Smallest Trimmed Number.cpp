#define ll long long int
#define pb push_back
#define se second
class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& a, vector<vector<int>>& q) {
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        //smallest h ->max heap :/
        vector<int>ans;
        int n=a[0].size();
        for(int i=0;i<q.size();i++){
            int small=q[i][0];
            int trimm=q[i][1];
            vector<string>temp(a.begin(),a.end());
            int j=0;
            //priority_queue<pair<string,int>>pq;//can take sting as would be of same size toh jiska leftmost bada hoga woi phele ayega huehue
            //but this wont decide the smallest index :P
            //so dont use pq ,use simple vector and sort ezpz
            vector<pair<string,int>>vp;
            for(auto &x:temp){
                x=x.substr(n-trimm);
                // cout<<x<<endl;
                vp.pb({x,j});
                j++;
            }
            sort(vp.begin(),vp.end());
            int ind=small-1;
            ans.pb(vp[ind].se);
        }
        // return {-1};
        return ans;
    }
};