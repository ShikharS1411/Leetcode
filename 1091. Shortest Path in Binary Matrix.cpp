#define fi first
#define se second
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        //shortest path->apply bfs/dijkstra 
        int n=g.size();
        if(g[0][0]==1||g[n-1][n-1]==1)return -1;
        // int vis[n][n]={0};
        vector<vector<int>>vis(n,vector<int>(n,0));
        queue<pair<int,int>>q;
        q.push({0,0});
        vis[0][0]=1;
        int dist=0;
        //up,down,left,right,tl,tr,bl,br
        int dx[8]={-1,1,0,0,-1,-1,1,1};
        int dy[8]={0,0,-1,1,-1,1,-1,1};
        while(!q.empty()){
            int sz=q.size();
            dist++;
            while(sz--){
                int x=q.front().fi;
                int y=q.front().se;
                q.pop();
                if(x==n-1 && y==n-1)return dist;
                for(int i=0;i<8;i++){
                    int row=x+dx[i];
                    int col=y+dy[i];
                    //valid cond
                    if(row>=0 && col>=0 && row<n && col<n && vis[row][col]==0 && g[row][col]==0){
                        vis[row][col]=1;//mark as visited
                        q.push({row,col});
                    }
                }
            }
        }
        return -1;
    }
};