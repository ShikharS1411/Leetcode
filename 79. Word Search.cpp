class Solution {
public:
   bool dfs(int ind, int i, int j,int n,int m,vector<vector<char>> &a, string s, vector<vector<int>> &vis){
       if(ind==s.size())return true;
       vis[i][j]=1;
       //up,down,left,right
       int drow[4]={-1,1,0,0};
       int dcol[4]={0,0,-1,1};
       for (int k=0; k<4;k++){
           int x=i+drow[k];
           int y=j+dcol[k];
           if (x>=0 && y>=0 && x<n && y<m && !vis[x][y] && s[ind]==a[x][y]){
            if (dfs(ind+1,x,y,n,m,a,s,vis) == true)return true;
        }
    }
    vis[i][j]=0;
    return false;
}
bool exist(vector<vector<char>> &a, string s){
    int n=a.size();
    int m=a[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(a[i][j]==s[0]){
                if(dfs(1,i,j,n,m,a,s,vis)==true)return true;
            }
        }
    }
    return false;
    }
};
