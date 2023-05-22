#define pb push_back
#define fi first
#define se second
class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        priority_queue<pair<int,int>>pq;
        map<int,int>mp;
        for(auto x:a)mp[x]++;
        for(auto x:mp){
            pq.push({-x.se,x.fi});
            if(pq.size()>k)pq.pop();
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.pb(pq.top().se);
            pq.pop();
        }
        return ans;
    }
};