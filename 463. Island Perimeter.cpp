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