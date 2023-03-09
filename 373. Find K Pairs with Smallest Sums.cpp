#define pb push_back
#define fi first
#define se second
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& a, vector<int>& b, int k) {
        /*
        //giving tle 
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                //need to add condtion here only to avoid tle -_-
                int sum=a[i]+b[j];
                pq.push({-sum,{a[i],b[j]}});
            }
        }
        // while(!pq.empty()){
        //     cout<<pq.top()<<endl;
        //     pq.pop();
        // }
        vector<vector<int>>ans;
        int sz=pq.size();
        int mini=min(k,sz);
        while(mini--){
            int x=pq.top().se.fi,y=pq.top().se.se;
            ans.pb({x,y});
            pq.pop();
        }
        return ans;
        */
        //optimal approach
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                int sum=a[i]+b[j];
                if(pq.size()<k)pq.push({sum,{a[i],b[j]}});
                else if(sum<pq.top().fi){
                    pq.pop();
                    pq.push({sum,{a[i],b[j]}});
                }
                else break;
            }
        }
        vector<vector<int>>ans;
        while(!pq.empty()){
            int x=pq.top().se.fi,y=pq.top().se.se;
            ans.pb({x,y});
            pq.pop();
        }
        return ans;
    }
};