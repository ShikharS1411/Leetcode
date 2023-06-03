#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& m, vector<int>& t) {
        vector<int>adj[n];
        int src=0;
        for(int i=0;i<m.size();i++){
            if(m[i]==-1){
                src=i;
                continue;
            }
            adj[m[i]].pb(i);
        }
        //using bfs
        //as same lvl inform time(t)can be different,so we cant do by just count++ 
        vector<int>vis(n,0);
        queue<pair<int,int>>q;
        int maxi=0;
        q.push({src,t[src]});
        vis[src]=1;
        while(!q.empty()){
            int node=q.front().fi;
            int time=q.front().se;
            q.pop();
            maxi=max(maxi,time);
            for(auto x:adj[node]){
                if(!vis[x]){
                    vis[x]=1;
                    q.push({x,time+t[x]});
                }
            }
        }
        return maxi;
    }
};