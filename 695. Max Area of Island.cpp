class Solution {
public:
    void dfs(int i,int j,int n,int m,int& area,vector<vector<int>>& a){
        if(i<0||j<0||i>=n||j>=m||a[i][j]==0)return;
        //visted
        //area would lie where 1 exists ez
        if(a[i][j]==1){
            area++;
            a[i][j]=0;
        }
        //up
        dfs(i-1,j,n,m,area,a);
        //down
        dfs(i+1,j,n,m,area,a);
        //left
        dfs(i,j-1,n,m,area,a);
        //right
        dfs(i,j+1,n,m,area,a);
    }
    int maxAreaOfIsland(vector<vector<int>>& a) {
        //using dfs
        int n=a.size(),m=a[0].size();
        //as dont know source and can be many uncconected together
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1){//always unconnected new one
                    int area=0;
                    dfs(i,j,n,m,area,a);
                    maxi=max(maxi,area);
                }
            }
        }
        return maxi;
    }
};