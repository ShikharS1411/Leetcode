#define pb push_back
#define fi first
#define se second
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<int,double>>adj[n];
        vector<double>dist(n, 0);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].pb({v,succProb[i]});
            adj[v].pb({u,succProb[i]});
          }
        priority_queue<pair<double,int>> pq;  
        dist[start]=0;
        pq.push({1,start});
         while(!pq.empty()){             
             double distance= pq.top().fi;
             int node=pq.top().se;
             pq.pop();
             for(auto it:adj[node]){
                 if((distance*it.se)>dist[it.fi]){
                     dist[it.fi] = distance * it.se;
                     pq.push({dist[it.fi], it.fi});
                    }
                }
            }
        return dist[end];
    }
};