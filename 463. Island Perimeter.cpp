class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        //brute forces
        int row=grid.size(),col=grid[0].size(),ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    ans+=4;
                    // check for the upward
                    if(i-1>=0 && grid[i-1][j]==1)ans--;
                    //check for the downward
                    if(i+1<row && grid[i+1][j]==1)ans--;
                    //check for the left
                    if(j-1>=0 && grid[i][j-1]==1)ans--;
                    // check for the right
                    if(j+1<col && grid[i][j+1]==1)ans--;
                }
            }
        }
        return ans;
    }
};
//using dfs
class Solution {
public:
    void dfs(int i,int j,int n,int m,int& count,vector<vector<int>>& a){
        if(i<0||j<0||i>=n||j>=m||a[i][j]==0){
            count++;
            return;
        }
        if(a[i][j]==2)return;
        if(a[i][j]==1)a[i][j]=2;//as need to count perimeter so cant go for 0 here else it would consider that as well
        //up
        dfs(i-1,j,n,m,count,a);
        //down
        dfs(i+1,j,n,m,count,a);
        //left
        dfs(i,j-1,n,m,count,a);
        //right
        dfs(i,j+1,n,m,count,a);
    }
    int islandPerimeter(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        //as we dont know source so traversing 
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1)dfs(i,j,n,m,count,a);
            }
        }
        return count;
    }
};