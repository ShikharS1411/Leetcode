#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        //using dijkstra
        vector<pair<int,int>>adj[n];
        for(int i=0;i<f.size();i++){
            //as directed :P
            adj[f[i][0]].pb({f[i][1],f[i][2]});
        }
        //priority would be k,so no need to make pq 
        //        dist,node
        queue<pair<int,int>>q;
        q.push({0,src});
        int stops=0;
        vector<int>dist(n,1e9);
        dist[src]=0;
        while(!q.empty() && stops<=k){
            int sz=q.size();
            //as have to explore all the options
            while(sz--){
                int curr_dist=q.front().fi;
                int node=q.front().se;
                q.pop();
                for(auto x:adj[node]){
                    int edge_dist=x.se;
                    int child_node=x.fi;
                    if(curr_dist+edge_dist<dist[child_node]){
                        dist[child_node]=curr_dist+edge_dist;
                        q.push({dist[child_node],child_node});
                    }
                }
            }
            //aftr this loop we'll get the best option to reach dest withing k stops
            stops++;
        }
        if(dist[dst]==1e9)return -1;//wo dst tk pauch hi nhi pata :sad:
        return dist[dst];//total computed dist
    }
};