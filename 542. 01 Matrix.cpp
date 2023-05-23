#define fi first
#define se second
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& a) {
        //whenever min/max dist use bfs ez
        //in such type of q 0 se nearest dekho not uss num se 0 hehe
        int n=a.size(),m=a[0].size();
        vector<vector<int>>ans(n , vector<int>(m,0));
        vector<vector<int>>visited(n ,vector<int>(m, 0));
        //         coodinates,   dist
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }
        //               up,right,down,left
        vector<int>drow={-1,0,1,0 };
        vector<int>dcol={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().fi.fi;
            int col=q.front().fi.se;
            int dis=q.front().se;
            ans[row][col]=dis;
            q.pop();
            for(int d=0;d<4;d++){
                int i=row+drow[d];
                int j=col+dcol[d];
                //opposite of edge case :/
                if(i>=0 && j>=0 && i<n && j<m && visited[i][j]==0){
                    q.push({{i,j},dis+1});
                    visited[i][j]=1;
                }
            }
        }
        return ans;
    }
};