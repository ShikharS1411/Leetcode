class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        //we just need to compute sum of elements who lies in given hourglass pattern(shiftable)
        //make the mid element as reference of the hourglass grid[i][j]
        int maxi=0,m=grid.size(),n=grid[0].size();
        //to satisfy the hourglass req index (else hourglass wont exists):
        //loops are acc to hourglass
        for(int i=1;i+1<m;i++){
            for(int j=1;j+1<n;j++){
                //as per hourglass pattern
                int sum=grid[i][j]+grid[i-1][j]+grid[i+1][j]+grid[i-1][j-1]+grid[i+1][j+1]+grid[i-1][j+1]+grid[i+1][j-1];
                //hourglass keep on moving acc to the loops indexes
                maxi=max(maxi,sum);//keep updating
            }
        }
        return maxi;
    }
};