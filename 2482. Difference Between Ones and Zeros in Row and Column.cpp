/*
class Solution{
public:
    
    int rows(int i,int x,vector<vector<int>> &nums,int n){
        int count=0;
        for (int k=0;k<n;k++){
                if (nums[i][k]==x)count++;  
        }
        return count;
    }
    int cols(int j,int x,vector<vector<int>> &nums,int m){
        int count=0;
        for (int k=0;k<m;k++){
                if (nums[k][j]==x)count++;  
        }
        return count;
    }
    
    vector<vector<int>> onesMinusZeros(vector<vector<int>> &nums)
    {
        
        // this approach will give tle
        int m=nums.size(),n=nums[0].size();
        // diff matrix
        vector<vector<int>> diff(m, vector<int>(n));
        for (int i=0; i<m;i++){
            for (int j=0;j<n;j++){
                diff[i][j] = rows(i,1,nums,n)+cols(j,1,nums,m)-(rows(i,0,nums,n)+cols(j,0,nums,m));
            }
        }
        return diff;
    }
};
*/
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> orows(n);
        vector<int> ocol(m);
        vector<int> zrow(n);
        vector<int> zcol(m);
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    orows[i] += 1;
                    ocol[j] += 1;
                }
                else{
                    zrow[i]+=1;
                    zcol[j]+=1;
                }
            }
        }
        vector<vector<int>> diff(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                diff[i][j] = orows[i] + ocol[j] - zrow[i] - zcol[j];
            }
        }
        return diff;
    }
};