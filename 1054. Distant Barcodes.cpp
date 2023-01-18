#define pb push_back
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& a) {
        /*
        if(a.size()==1)return a;
        unordered_map<int,int>umap;
        for(auto x:a)umap[x]++;
        priority_queue<pair<int,int>>pq1,pq2;
        for(auto x:umap){
            pq1.push(make_pair(x.second,x.first));
            pq2.push(make_pair(-x.second,-x.first));
        }
        vector<int>ans;
        while(pq2.size()>1){
            //element              freq
            int x=pq1.top().second,y=pq1.top().first;
            int d=abs(pq2.top().second),e=abs(pq2.top().first);
            while(e-- && y--){
                ans.pb(x);
                // y--;
                ans.pb(d);
            }
            pq2.pop();
        }
        if(y>0)ans.pb(x);
        return ans;
        */
        if(a.size()==1||a.size()==0)return a;
        unordered_map<int,int>umap;
        for(auto x:a)umap[x]++;
        priority_queue<pair<int,int>>pq;
        for(auto x:umap)pq.push(make_pair(x.second,x.first));
        vector<int>ans;
        while(pq.top().first){
            auto pq1=pq.top();
            pq.pop();
            ans.pb(pq1.second);
            pq1.first--;
            auto pq2=pq.top();
            pq.pop();
            if(pq2.first){
                ans.pb(pq2.second);
                pq2.first--;
            }
            pq.push(pq1);
            pq.push(pq2);
        }
        return ans;
    }
};