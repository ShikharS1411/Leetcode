class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //to rotate it by 90* first take transpose and then reverse the each row
        int m=matrix.size(),n=matrix[0].size();
        //take transpose
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++) swap(matrix[i][j],matrix[j][i]);
        }
        //now reverse the each row
        for(int i = 0; i < m; i++) reverse(matrix[i].begin(), matrix[i].end());
    }
};