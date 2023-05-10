class Solution {
public:
    void dfs(int i,int j,int n,int m,int c,int x,vector<vector<int>>& a){
        if(i<0||j<0||i>=n||j>=m||a[i][j]!=x)return;
        if(a[i][j]==x)a[i][j]=c;
        //up
        dfs(i-1,j,n,m,c,x,a);
        //down
        dfs(i+1,j,n,m,c,x,a);
        //left
        dfs(i,j-1,n,m,c,x,a);
        //right
        dfs(i,j+1,n,m,c,x,a);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int c) {
        int x=a[sr][sc];
        if(x==c)return a;
        int n=a.size(),m=a[0].size();
        dfs(sr,sc,n,m,c,x,a);
        return a;
    }
};