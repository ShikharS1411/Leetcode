#define pb push_back
class Solution {
public:
    void dfs(map<int,vector<int>>&adj, vector<int>& vis, int i){
        if(vis[i]==0)vis[i]=1;
        for(auto x:adj[i]){
            if(vis[x]==0)dfs(adj,vis,x);
        }
    }
    int findCircleNum(vector<vector<int>>& a) {
        int count=0;int n=a.size();
        // vector<int>adj[n];
        map<int,vector<int>>adj;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (a[i][j]==1){
                    adj[i].pb(j);
                    adj[j].pb(i);
                }
            }
        }
        vector<int>vis(n,0);
        for (int i=0;i<n;i++){
            if (vis[i]==0){
                count++;
                dfs(adj,vis,i);
            }
        }
        return count;
    }
};