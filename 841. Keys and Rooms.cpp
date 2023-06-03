#define pb push_back
class Solution {
public:
    void dfs(int i,vector<int>&vis,vector<vector<int>>& a){
        // if(vis[i])return;
        vis[i]=1;
        for(auto x:a[i]){
            if(!vis[x])dfs(x,vis,a);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& a) {
        //disconnected comp exists
        // vector<int>adj[a.size()];
        // for(int i=0;i<a.size();i++){
        //     for(int j=0;j<a[i].size();i++){
        //         adj[i].pb(a[i][j]);
        //     }
        // }
        //dfs>>
        vector<int>vis(a.size(),0);
        int count=0;
        for(int i=0;i<a.size();i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,a);
            }
        }
        return count==1;
    }
};