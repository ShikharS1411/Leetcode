#define ll long long int
#define pb push_back
class Solution {
public:
    void dfs(int node,int &count,vector<int>adj[],vector<int>&vis){
        vis[node]=1;
        count++;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,count,adj,vis);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& a) {
        int n=a.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            ll x1=a[i][0];
            ll y1=a[i][1];
            ll r1=a[i][2];
            for(int j=0;j<n;j++){
                if(i!=j){
                    ll x2=a[j][0],y2=a[j][1],r2=a[j][2];
                    ll dis=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
                    if(dis<=r1*r1){
                        adj[i].pb(j);
                    }
                }
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            //need to create everytime,treat it like a directed graph :/
            vector<int>vis(n,0);
            int count=0;
            dfs(i,count,adj,vis);
            maxi=max(maxi,count);
        }
     return maxi;
    }
};
/*eg
1->2,4
3->1,5,6
isme 1 ko krenge toh 2,4 detonate ho jyenge
but agr 3 ko krenge toh 1,2,4,5,6 bhi honge
so agr simple ek hi vis ke saath traverse krte toh kbhi aise edges pr aa hi nhi pta (smz jna are ez) 
*/