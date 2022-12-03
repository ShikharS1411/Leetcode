class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        /*
        int m=mat.size(),sum=0;
        for(int i=0;i<m;i++){
            sum+=mat[i][i]+mat[i][m-i+1];
        }
        if(m%2==1)sum-=mat[m/2][m/2];//reduce mid element once as for odd lenght mat it will add twice
        return sum;
        */
        int m=mat.size(),sum=0;
        for(int i=0;i<m;i++){
            sum+=mat[i][i]+mat[i][m-i-1];    
        }
        if(m%2==1)sum-=mat[m/2][m/2];
        return sum; 
    }
};